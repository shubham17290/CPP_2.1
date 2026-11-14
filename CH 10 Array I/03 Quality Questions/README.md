# Quality Questions — CH 10 Array

Curated, interview-style practice problems for this chapter. Each file is self-contained and compiles independently.

| # | File | Problem |
|---|------|---------|
| 1 | `_01_second_largest.cpp` | Find second largest element in an array. |
| 2 | `_02_rotate_array.cpp` | Rotate array left by k positions. |
| 3 | `_03_remove_duplicates.cpp` | Remove duplicates from a sorted array. |

## How to run

```bash
g++ -std=c++17 -O2 -Wall -Wextra "03 Quality Questions/<file>.cpp" -o out
./out
```

<!-- practice-questions -->

## 🧪 More Practice

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Move all zeroes to the end while keeping the order of non-zero elements. | Two pointers, stable partition. |
| 2 | Find the missing number in `1..n`. | Sum formula or XOR. |
| 3 | Solve two-sum on a sorted array. | Two pointers from both ends. |
| 4 | Merge two sorted arrays into a third array. | Compare the fronts and advance. |

> Part of [CH 10 — Arrays I](../README.md).
