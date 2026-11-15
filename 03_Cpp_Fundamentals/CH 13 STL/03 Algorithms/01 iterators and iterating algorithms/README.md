# Iterating and Iterating Algorithms

Examples of `<algorithm>` functions that operate on an iterator range
`[first, last)` and iterate over, search, count, or modify elements.

## Files

| File | Algorithm | What it does |
|------|-----------|--------------|
| `_01_for_each.cpp` | `for_each()` | Applies a function/lambda to every element |
| `_02_find.cpp` | `find()` | Returns an iterator to the first matching value |
| `_03_find_if.cpp` | `find_if()` | Returns the first element matching a predicate |
| `_04_count.cpp` | `count()` | Counts occurrences of a value |
| `_05_count_if.cpp` | `count_if()` | Counts elements matching a predicate |
| `_06_sort.cpp` | `sort()` | Sorts the range in ascending order |
| `_07_reverse.cpp` | `reverse()` | Reverses the order of elements |
| `_09_unique.cpp` | `unique()` | Removes consecutive duplicates (use with `erase`) |
| `_10_rotate.cpp` | `rotate()` | Rotates the range around a middle iterator |
| `_11_partition.cpp` | `partition()` | Places elements matching a predicate first |

## Key Points

- All functions take `begin()` and `end()` iterators.
- `find()` / `find_if()` return `end()` when no match exists.
- `unique()` only removes **consecutive** duplicates; sort first for all duplicates.
- `rotate(v.begin(), v.begin() + k, v.end())` moves the element at index `k` to the front.

## Example

```cpp
vector<int> v = {40, 10, 30, 20};

sort(v.begin(), v.end());      // 10 20 30 40
reverse(v.begin(), v.end());   // 40 30 20 10
```

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Count even numbers with `count_if`. | Lambda predicate. |
| 2 | Find the first negative number with `find_if`. | Check against `end()`. |
| 3 | Sort descending with a lambda. | `sort(v.begin(), v.end(), [](int a, int b){ return a > b; })`. |
| 4 | Partition an array into even and odd values. | `partition` or `stable_partition`. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
