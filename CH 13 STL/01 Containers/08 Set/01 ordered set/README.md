# Set — Ordered Set

`std::set` is an associative container that stores unique elements in sorted order. Typically implemented as a red-black tree. O(log n) complexity for search, insert, and delete.

## Folders

| Folder | Contents |
|--------|----------|
| `01 bsics of set` | Basic ordered set examples |
| `02 function` | Member function examples |

## Key Features

- Implemented as a balanced binary search tree (usually red-black tree)
- Elements are sorted and unique
- O(log n) lookup, insertion, deletion
- Supports bidirectional iterators

## Header

```cpp
#include <set>
set<int> st;
```

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Insert values and print them in sorted order. | Set iteration is ordered. |
| 2 | Find the smallest element greater than x. | `upper_bound`. |
| 3 | Count distinct elements in an array. | Insert into a set and read `size()`. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
