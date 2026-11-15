# Vector — Advanced

Advanced `std::vector` topics including multi-dimensional vectors.

## Files

- `_01_2D_vector.cpp` — 2D vector (vector of vectors)
- `_02_zaged_array.cpp` — Jagged array (vector of vectors with different row sizes)

## Key Concepts

- A 2D vector is `vector<vector<int>>`
- Each row can have a different number of columns (jagged array)
- Access: `v[i][j]`

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Transpose a 2D vector. | Swap `v[i][j]` with `v[j][i]`. |
| 2 | Build a jagged array with n rows of increasing size. | Resize each row independently. |
| 3 | Flatten a 2D vector into a 1D vector. | Nested range-based loops. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
