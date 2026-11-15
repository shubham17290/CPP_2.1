# Types of Iterators

Examples of input, output, forward, bidirectional, and random-access iterators.

## Files

| File | Iterator category |
|:--|:--|
| `_01_input_iterator.cpp` | Input |
| `_02_output_iterator.cpp` | Output |
| `_03_forward_iterator.cpp` | Forward |
| `_04_bidirectional_iterator.cpp` | Bidirectional |
| `_05_random_access_iterator.cpp` | Random access |

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Explain which category `std::list` provides. | Bidirectional, not random access. |
| 2 | Use `std::advance` to move an iterator forward by k. | Works for every category. |
| 3 | Use `std::distance` on two iterators. | Linear for lists, constant for vectors. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
