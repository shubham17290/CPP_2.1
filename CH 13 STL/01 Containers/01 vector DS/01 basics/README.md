# Vector — Basics

Introduction to `std::vector`: declaration, initialization, and basic operations.

## Files

- `_01_vector_intro.cpp` — Vector introduction and basic usage

## Key Concepts

- Vectors are dynamic arrays that can grow and shrink in size
- Elements are stored contiguously in memory
- Random access is O(1) using `operator[]`
- Insertion at the end (`push_back`) is amortized O(1)

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Read n integers into a vector and print them. | `push_back` in a loop. |
| 2 | Double every element with a range-based `for` loop. | Use `for (int& x : v)`. |
| 3 | Print `front()`, `back()`, and `at(1)`. | Check `empty()` first. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
