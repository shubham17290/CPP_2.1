# Algorithms

Reusable operations that work over iterator ranges, including sorting, searching,
counting, copying, modifying, and numeric algorithms.

## Folders

| Folder | Contents |
|--------|----------|
| `01 iterators and iterating algorithms` | `for_each`, `find`, `find_if`, `count`, `count_if`, `sort`, `reverse`, `unique`, `rotate`, `partition` |
| `02 Numeric algorithms` | `accumulate`, `inner_product`, `partial_sum`, `iota` (from `<numeric>`) |
| `03 Searching and finding algorithms` | `binary_search`, `lower_bound`, `upper_bound`, `equal_range` |

## Headers

| Header | Provides |
|--------|----------|
| `<algorithm>` | Iterating, searching, sorting, and modifying algorithms |
| `<numeric>` | Numeric operations such as `accumulate` and `iota` |

## Iterator Ranges

Most algorithms accept a half-open range `[first, last)`:

```cpp
sort(v.begin(), v.end());          // sorts the whole vector
find(v.begin(), v.end(), target);  // searches the whole vector
```

The searching algorithms (`binary_search`, `lower_bound`, `upper_bound`,
`equal_range`) require the range to be sorted before they are called.

## Notes

- Each `.cpp` file is self-contained and can be compiled on its own.
- Searching examples use an ascending `vector<int>` so the sorted-range
  requirement is satisfied.
