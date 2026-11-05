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
