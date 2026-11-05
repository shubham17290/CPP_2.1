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