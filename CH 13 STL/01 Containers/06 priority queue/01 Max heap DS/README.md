# Priority Queue — Max Heap DS

Max-heap priority queue: the largest element always stays at the top. This is the default behavior of `std::priority_queue`.

## Folders

| Folder | Contents |
|--------|----------|
| `01 bsics of priority queue` | Basic priority queue example |
| `02 functions of the priority queue` | One file per member function |

## Member Functions

- `push(x)` — insert element (largest rises to top)
- `pop()` — remove the top (largest) element
- `top()` — access the largest element
- `empty()` — check if queue is empty
- `size()` — number of elements
- `swap(pq2)` — swap contents with another priority queue
- `emplace(x)` — construct element in place

## Header

```cpp
#include <queue>
priority_queue<int> pq; // max heap by default
```

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Push and pop values and print the top after each operation. | The largest value is always on top. |
| 2 | Find the three largest values in an array. | Pop three times. |
| 3 | Use a max-heap to sort an array descending. | Pop into a vector. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
