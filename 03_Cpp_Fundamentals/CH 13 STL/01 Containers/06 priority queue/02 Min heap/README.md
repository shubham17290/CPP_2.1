# Priority Queue — Min Heap

Min-heap priority queue: the smallest element always stays at the top. Uses `greater<int>` as the comparison functor.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Basics` | Basic min-heap priority queue example |
| `02 functions of the min heap` | One file per member function |

## Member Functions

- `push(x)` — insert element (smallest rises to top)
- `pop()` — remove the top (smallest) element
- `top()` — access the smallest element
- `empty()` — check if queue is empty
- `size()` — number of elements
- `swap(pq2)` — swap contents with another priority queue
- `emplace(x)` — construct element in place

## Header

```cpp
#include <queue>
#include <vector>
priority_queue<int, vector<int>, greater<int>> pq; // min heap
```

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Build a min-heap and print values in ascending order. | Pop until empty. |
| 2 | Find the k-th smallest element. | Max-heap of size k. |
| 3 | Merge k sorted lists. | Min-heap of the current heads. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
