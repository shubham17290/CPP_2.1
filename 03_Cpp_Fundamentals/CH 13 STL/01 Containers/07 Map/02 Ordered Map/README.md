# Map — Ordered Map

`std::map` is an associative container that stores key-value pairs sorted by key. Typically implemented as a red-black tree. O(log n) complexity for search, insert, and delete.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Basics` | Basic ordered map examples |
| `02 functions` | Member function examples |

## Key Features

- Implemented as a balanced binary search tree (usually red-black tree)
- Elements are sorted by key
- O(log n) lookup, insertion, deletion
- Supports bidirectional iterators

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Print keys of a map in sorted order. | `std::map` iterates by key. |
| 2 | Find the first key greater than x. | `upper_bound`. |
| 3 | Count frequencies and print them sorted by key. | Map iteration is already ordered. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
