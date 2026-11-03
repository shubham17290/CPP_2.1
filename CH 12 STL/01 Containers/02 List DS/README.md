# List

`std::list` is a sequence container that implements a doubly-linked list. Elements are not stored contiguously, so random access is not supported, but insertion and deletion anywhere in the list is O(1) once you have an iterator.

## Folders

| Folder | Contents |
|--------|----------|
| `01 basics and functions` | Basics and common list operations |

## Common Member Functions

- `push_back(x)` — insert at the back
- `push_front(x)` — insert at the front
- `pop_back()` — remove from the back
- `pop_front()` — remove from the front
- `front()` / `back()` — access first/last element
- `empty()` — check if list is empty
- `size()` — number of elements
- `insert(pos, x)` — insert element at position
- `erase(pos)` — remove element at position
