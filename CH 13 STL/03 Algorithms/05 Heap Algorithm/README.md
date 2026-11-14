# Heap Algorithms

Turn a range into a binary heap and operate on it with `make_heap`, `push_heap`, `pop_heap`, and `sort_heap`.

## Files

| File | Algorithm | What it does |
|:--|:--|:--|
| `_01_make_heap.cpp` | `make_heap()` | Rearranges a range into a max-heap |
| `_02_push_heap.cpp` | `push_heap()` | Restores heap order after a push |
| `_03_pop_heap.cpp` | `pop_heap()` | Moves the top element to the end |
| `_04_sort_heap.cpp` | `sort_heap()` | Sorts a heap range |

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Build a max-heap and print the largest element. | The largest is at `front()`. |
| 2 | Heap-sort an array with the four heap algorithms. | Make, then repeatedly pop. |
| 3 | Use `make_heap` with `greater<int>` for a min-heap. | Pass the comparator. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
