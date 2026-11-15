# Upper Bound

`std::upper_bound` returns an iterator to the first element that is **greater
than** the given value.

## File

| File | Demonstrates |
|------|--------------|
| `_01_upper_bound.cpp` | `upper_bound(..., 40)` on `{10, 20, 30, 40, 50, 60}` |

## Behavior

- For `40`, the returned iterator points to `50`.
- If no element is greater, it returns `end()`.
- Runs in `O(log n)` comparisons on a sorted range.

## Difference from `lower_bound`

| Value | `lower_bound` | `upper_bound` |
|-------|---------------|---------------|
| `40` | iterator to `40` | iterator to `50` |

## Example

```cpp
vector<int> arr = {10, 20, 30, 40, 50, 60};

auto it = upper_bound(arr.begin(), arr.end(), 40);
cout << *it << endl; // 50
```

Header: `#include <algorithm>`

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Find the first element `> x`. | `upper_bound`. |
| 2 | Count elements `<= x`. | `upper_bound - begin()`. |
| 3 | Find the last occurrence of x. | `upper_bound` then step back. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
