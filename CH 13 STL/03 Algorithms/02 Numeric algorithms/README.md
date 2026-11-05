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
