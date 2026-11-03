# Deque

`std::deque` (double-ended queue) is a sequence container that allows insertion and deletion at both ends. Elements are not guaranteed to be stored contiguously, but random access is supported.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Basics of dequeue` | Deque basics and traversing |
| `02 functions on the dequeue` | erase, clear, swap functions |

## Common Member Functions

- `push_back(x)` — insert at the back
- `push_front(x)` — insert at the front
- `pop_back()` — remove from the back
- `pop_front()` — remove from the front
- `front()` / `back()` — access first/last element
- `empty()` — check if deque is empty
- `size()` — number of elements
- `erase(pos)` — remove element at position
- `clear()` — remove all elements
- `swap(d2)` — swap contents with another deque
