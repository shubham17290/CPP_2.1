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

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Implement sliding-window maximum. | Keep candidate indices in a deque. |
| 2 | Check a palindrome with a deque. | Compare `front()` and `back()`. |
| 3 | Push and pop from both ends. | `push_front`, `push_back`, `pop_front`, `pop_back`. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
