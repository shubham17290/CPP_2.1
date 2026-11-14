# Min / Max Algorithms

The `min`, `max`, `min_element`, and `max_element` family from `<algorithm>`.

## Files

| File | Algorithm | What it does |
|:--|:--|:--|
| `_01_min.cpp` | `min()` | Smaller of two values |
| `_02_max.cpp` | `max()` | Larger of two values |
| `_03_min_element.cpp` | `min_element()` | Iterator to the smallest element |
| `_04_max_element.cpp` | `max_element()` | Iterator to the largest element |

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Find the largest and smallest values in a vector. | `minmax_element` returns both. |
| 2 | Find the second largest element using `max_element` twice. | Remove or skip the maximum. |
| 3 | Use a custom comparator with `min_element` on pairs. | Compare `second`, then `first`. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
