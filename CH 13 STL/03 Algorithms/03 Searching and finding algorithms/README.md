# Searching and Finding Algorithms

Binary-search based algorithms from `<algorithm>` that search a **sorted** range
in `O(log n)` comparisons.

## Folders

| Folder | Algorithm | Result |
|--------|-----------|--------|
| `01 binary search` | `binary_search()` | `bool` — whether the value exists |
| `02 lower bound` | `lower_bound()` | Iterator to the first element `>= value` |
| `03 upper bound` | `upper_bound()` | Iterator to the first element `> value` |
| `04 equal range` | `equal_range()` | Pair of iterators: `{lower_bound, upper_bound}` |

## Choosing an Algorithm

| Need | Use |
|------|-----|
| Check whether a value exists | `binary_search` |
| Find the first position where a value can be inserted | `lower_bound` |
| Find the first position after all equal values | `upper_bound` |
| Find the full range of equal values | `equal_range` |

## Important

- The input range **must be sorted** (ascending in these examples).
- `lower_bound` / `upper_bound` return `end()` when no such element exists, so
  check the iterator before dereferencing it.
- Header: `#include <algorithm>`

## Example

```cpp
vector<int> v = {10, 20, 30, 40, 50, 60};

binary_search(v.begin(), v.end(), 40);   // true
*lower_bound(v.begin(), v.end(), 35);    // 40
*upper_bound(v.begin(), v.end(), 40);    // 50
```
