# Equal Range

`std::equal_range` returns the pair of iterators that delimit all elements equal
to a given value: `{lower_bound, upper_bound}`.

## File

| File | Status |
|------|--------|
| `_01_equal_range.cpp` | Homework placeholder — currently contains only a TODO comment |

## Behavior

- Returns `pair<iterator, iterator>`.
- `first` is the `lower_bound`, `second` is the `upper_bound`.
- If the value is absent, both iterators point to the same insertion position.
- Runs in `O(log n)` comparisons on a sorted range.

## Planned Example

```cpp
vector<int> arr = {10, 20, 20, 20, 30, 40};

auto range = equal_range(arr.begin(), arr.end(), 20);
cout << (range.second - range.first) << endl; // 3
```

Header: `#include <algorithm>`

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Count occurrences of x. | `equal_range` distance. |
| 2 | Print all values equal to x. | Iterate the returned pair. |
| 3 | Compare `equal_range` with two separate bound calls. | One algorithm, one range. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
