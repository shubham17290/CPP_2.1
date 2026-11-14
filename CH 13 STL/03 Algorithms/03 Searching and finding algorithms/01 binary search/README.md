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

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Check whether a value exists in a sorted array. | `binary_search`. |
| 2 | Search a rotated sorted array. | Find the pivot, then binary search. |
| 3 | Compare `binary_search` with `find` on a sorted vector. | Logarithmic vs linear. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
