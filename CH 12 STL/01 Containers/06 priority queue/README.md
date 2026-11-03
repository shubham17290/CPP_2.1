# Priority Queue

`std::priority_queue` is a container adapter that provides constant-time lookup of the largest (by default) element. It is typically implemented as a max-heap.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Max heap DS` | Max-heap priority queue basics and functions |
| `02 functions of the priority queue` | Legacy functions folder (max heap) |
| `02 Min heap` | Min-heap priority queue basics and functions |

## Member Functions

- `push(x)` / `emplace(x)` — insert element
- `pop()` — remove the top element
- `top()` — access the top element (does not remove)
- `empty()` — check if queue is empty
- `size()` — number of elements
- `swap(pq2)` — swap contents with another priority queue

## Max Heap vs Min Heap

- **Max heap (default)**: `priority_queue<int>` — largest element at top
- **Min heap**: `priority_queue<int, vector<int>, greater<int>>` — smallest element at top
