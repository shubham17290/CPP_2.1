# Numeric Algorithms

Examples of numeric operations from the `<numeric>` header.

## Files

| File | Algorithm | What it does |
|------|-----------|--------------|
| `_01_numeric_basic.cpp` | `accumulate()` | Sums all elements in a range |
| `_02_inner_product.cpp` | `inner_product()` | Computes a dot product of two ranges |
| `_03_partial_sum.cpp` | `partial_sum()` | Stores running prefix sums in another range |
| `_04_iota.cpp` | `iota()` | Fills a range with consecutive values starting from a seed |

## Header

```cpp
#include <numeric>
```

## Examples

```cpp
vector<int> v = {10, 20, 30, 40, 50};
int sum = accumulate(v.begin(), v.end(), 0); // 150

vector<int> seq(5);
iota(seq.begin(), seq.end(), 250);           // 250 251 252 253 254
```

- `inner_product(first.begin(), first.end(), second.begin(), 0)` multiplies
  matching elements and adds the products.
- `partial_sum` writes `1 3 6 10 15` for the input `1 2 3 4 5`.

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Compute the product of all elements with `accumulate`. | Pass `1` as the initial value and `multiplies<int>()`. |
| 2 | Build prefix sums with `partial_sum`. | Compare with a manual loop. |
| 3 | Fill a vector with 1..n using `iota`. | Then sum it with `accumulate`. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
