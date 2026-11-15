# Static vs Dynamic Storage

Shows how a vector behaves differently from a fixed-size array: capacity can grow, and storage is managed dynamically.

## Files

- `_01_property_01.cpp` — first property demo for static vs dynamic storage

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Print `size()` and `capacity()` after every `push_back`. | Observe growth points. |
| 2 | Reserve 50 elements and repeat the experiment. | `reserve` changes capacity only. |
| 3 | Compare `sizeof(array)` with `vector.size() * sizeof(int)`. | One is compile-time storage, the other runtime. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
