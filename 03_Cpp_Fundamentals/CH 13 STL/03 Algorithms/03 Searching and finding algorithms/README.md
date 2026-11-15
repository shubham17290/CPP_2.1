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

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Count occurrences of x in a sorted array. | `upper_bound - lower_bound`. |
| 2 | Find the first and last position of x. | Use both bounds. |
| 3 | Find the insertion position for x. | `lower_bound - begin()`. |
| 4 | Search in a rotated sorted array. | Modified binary search. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
