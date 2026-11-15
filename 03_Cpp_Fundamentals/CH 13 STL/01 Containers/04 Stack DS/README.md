# Stack

`std::stack` is a container adapter that provides LIFO (Last In, First Out) behavior. Elements are inserted and removed from the top only.

## Folders

| Folder | Contents |
|--------|----------|
| `01 Basics` | Stack basics and member function examples |

## Common Member Functions

- `push(x)` — insert element at the top
- `pop()` — remove the top element
- `top()` — access the top element (does not remove)
- `empty()` — check if stack is empty
- `size()` — number of elements
- `swap(s2)` — swap contents with another stack

## Example files

See `01 Basics/` for one-file-per-function examples.

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Check balanced parentheses. | Push openers, pop and match closers. |
| 2 | Reverse a string with a stack. | Push every character, then pop. |
| 3 | Find the next greater element. | Monotonic stack. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
