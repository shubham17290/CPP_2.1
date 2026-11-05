# Binary Search

`std::binary_search` checks whether a value exists in a sorted range.

## File

| File | Demonstrates |
|------|--------------|
| `_01_binary_search.cpp` | Searching for `40` in `{10, 20, 30, 40, 50, 60}` |

## Behavior

- Returns `true` if the value is present, otherwise `false`.
- Runs in `O(log n)` comparisons.
- The range must already be sorted.

## Example

```cpp
vector<int> arr = {10, 20, 30, 40, 50, 60};

bool found = binary_search(arr.begin(), arr.end(), 40);
cout << found << endl; // 1
```

Header: `#include <algorithm>`
