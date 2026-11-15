const fs = require('fs');
const path = require('path');

const root = path.resolve(__dirname, '..');
const docsDir = path.join(root, 'docs');
const templatePath = path.join(__dirname, 'template.html');

function walk(dir) {
  let out = [];
  for (const entry of fs.readdirSync(dir, { withFileTypes: true })) {
    if (entry.name === '.git' || entry.name === 'docs' || entry.name === 'scripts') continue;
    const full = path.join(dir, entry.name);
    if (entry.isDirectory()) out = out.concat(walk(full));
    else if (entry.isFile() && entry.name.endsWith('.cpp')) out.push(full);
  }
  return out;
}

const files = walk(root)
  .map((full) => {
    const rel = path.relative(root, full).split(path.sep).join('/');
    return { path: rel, content: fs.readFileSync(full, 'utf8') };
  })
  .sort((a, b) => (a.path < b.path ? -1 : a.path > b.path ? 1 : 0));

const readme = fs.readFileSync(path.join(root, 'README.md'), 'utf8');

// Chapter guides are rendered inside the chapter view of the code browser.
const readmes = {};
const SKIP_DIRS = new Set(['.git', 'docs', 'scripts', 'node_modules']);
function collectReadmes(dir, relPrefix) {
  let entries;
  try { entries = fs.readdirSync(dir, { withFileTypes: true }); } catch (e) { return; }
  for (const entry of entries) {
    if (!entry.isDirectory() || SKIP_DIRS.has(entry.name)) continue;
    const full = path.join(dir, entry.name);
    const rel = relPrefix ? relPrefix + '/' + entry.name : entry.name;
    if (/^(CH\s*\d+|00_Practice)/i.test(entry.name)) {
      const readmePath = path.join(full, 'README.md');
      if (fs.existsSync(readmePath)) {
        readmes[rel + '/README.md'] = fs.readFileSync(readmePath, 'utf8');
      }
    }
    collectReadmes(full, rel);
  }
}
collectReadmes(root, '');

const data = { files, readme, readmes };

const template = fs.readFileSync(templatePath, 'utf8');
if (!template.includes('{{DATA}}')) {
  throw new Error('template.html is missing the {{DATA}} placeholder');
}

const html = template.replace('{{DATA}}', JSON.stringify(data));
fs.writeFileSync(path.join(docsDir, 'index.html'), html, 'utf8');
fs.writeFileSync(path.join(docsDir, 'file-list.json'), JSON.stringify(files.map((f) => f.path)), 'utf8');

console.log('Built docs/index.html and docs/file-list.json with ' + files.length + ' C++ files and ' + Object.keys(readmes).length + ' chapter guides.');
