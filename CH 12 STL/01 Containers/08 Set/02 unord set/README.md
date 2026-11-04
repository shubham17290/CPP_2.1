# Set — Unordered Set

`std::unordered_set` is an associative container that stores unique elements in a hash table. Average O(1) complexity for search, insert, and delete. Elements are not sorted.

## Folders

| Folder | Contents |
|--------|----------|
| `01 bsics of set` | Basic unordered set examples |
| `02 functions` | Member function examples |

## Key Features

- Implemented as a hash table
- No guaranteed ordering of elements
- Average O(1) lookup, insertion, deletion
- Elements are unique

## Header

```cpp
#include <unordered_set>
unordered_set<int> st;
```