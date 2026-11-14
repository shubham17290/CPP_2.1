# Vector — Member Functions

One file per core `std::vector` member function, with state printed before and after each operation.

## Files

| File | Function |
|:--|:--|
| `_01_size.cpp` | `size()` — number of elements |
| `_02_push_back.cpp` | `push_back()` — append |
| `_03_pop_back.cpp` | `pop_back()` — remove last |
| `_04_front.cpp` | `front()` — first element |
| `_05_back.cpp` | `back()` — last element |
| `_06_at.cpp` | `at()` — checked access |

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Push 1..5, then pop twice and print the vector. | Track `size()` after each change. |
| 2 | Access an out-of-range index with `at` and catch the exception. | `try` / `catch (const out_of_range&)`. |
| 3 | Print `front` and `back` before and after a swap with another vector. | `swap`. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
