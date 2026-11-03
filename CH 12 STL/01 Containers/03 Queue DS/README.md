# Queue

`std::queue` is a container adapter that provides FIFO (First In, First Out) behavior. By default it is backed by a `deque`.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Basics` | Queue basics and member function examples |

## Member Functions

- `push(x)` / `emplace(x)` — insert at the rear (enqueue)
- `pop()` — remove from the front (dequeue)
- `front()` — access the first element
- `back()` — access the last element
- `size()` — number of elements
- `empty()` — whether the queue is empty
- `swap(q2)` — swap contents with another queue

## Example files

See `01 Basics/` for one-file-per-function examples: `_01_basic_of_queue.cpp`, `_02_push_and_pop.cpp`, `_03_front_and_back.cpp`, `_04_size_and_empty.cpp`, `_05_swap.cpp`, `_06_emplace.cpp`, `_07_traversing_queue.cpp`.
