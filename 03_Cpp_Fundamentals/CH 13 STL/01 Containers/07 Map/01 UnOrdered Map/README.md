# Map — Unordered Map

`std::unordered_map` is an associative container that stores key-value pairs in a hash table. Average O(1) complexity for search, insert, and delete. Elements are not sorted.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Basics` | Unordered map basics |
| `02 functions and methods` | Member function examples |

## Key Features

- Implemented as a hash table
- No guaranteed ordering of elements
- Average O(1) lookup, insertion, deletion
- Keys must be hashable

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Build an unordered map from names to marks. | Insert with `[]` or `insert`. |
| 2 | Update a value and print it with `at`. | `at` throws when the key is missing. |
| 3 | Find and erase a key. | Check `find` before dereferencing. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
