# Vector (APC) — First Pass

A first pass over `std::vector`: syntax, common member functions, and the difference between static and dynamic storage. The deeper container material lives in [`01 Containers/01 vector DS`](../01%20Containers/01%20vector%20DS/README.md).

## Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 basics of the vector`](01%20basics%20of%20the%20vector/) | Vector syntax and the range-based `for` loop. |
| [`02 Vector Function`](02%20Vector%20Function/) | `size`, `push_back`, `pop_back`, `front`, `back`, and `at`. |
| [`03 Static and dynamic`](03%20Static%20and%20dynamic/) | Static vs dynamic behaviour and the first property demo. |

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Read n integers into a vector and print the sum. | `push_back` in a loop, then accumulate. |
| 2 | Compare `size()` and `capacity()` after 10 `push_back` calls. | Capacity grows in steps. |
| 3 | Remove the last element until the vector is empty. | `pop_back` + `empty`. |
| 4 | Build a vector of squares from 1 to n. | `push_back(i * i)`. |

> Part of [CH 13 — Standard Template Library (STL)](../README.md).
