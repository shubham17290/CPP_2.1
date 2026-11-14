# Lower Bound

`std::lower_bound` returns an iterator to the first element that is **not less
than** the given value (the first element `>= value`).

## File

| File | Demonstrates |
|------|--------------|
| `_01_lower_bound.cpp` | `lower_bound(..., 35)` on `{10, 20, 30, 40, 50, 60}` |

## Behavior

- For `35`, the returned iterator points to `40`.
- If every element is smaller than the value, it returns `end()`.
- Runs in `O(log n)` comparisons on a sorted range.

## Example

```cpp
vector<int> arr = {10, 20, 30, 40, 50, 60};

auto it = lower_bound(arr.begin(), arr.end(), 35);
cout << *it << endl; // 40
```

Header: `#include <algorithm>`

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Find the first element `>= x`. | `lower_bound`. |
| 2 | Find the insertion index for x. | Subtract `begin()`. |
| 3 | Count elements smaller than x. | `lower_bound - begin()`. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
