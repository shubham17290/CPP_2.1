# Quality Questions — CH 09 Pointers

Curated, interview-style practice problems for this chapter. Each file is self-contained and compiles independently.

| # | File | Problem |
|---|------|---------|
| 1 | `_01_pointer_arithmetic.cpp` | Pointer arithmetic on an array. |
| 2 | `_02_swap_using_pointers.cpp` | Swap two values using pointers. |

## How to run

```bash
g++ -std=c++17 -O2 -Wall -Wextra "Quality Questions/<file>.cpp" -o out
./out
```

<!-- practice-questions -->

## 🧪 More Practice

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Traverse an array using only a pointer and a sentinel. | Do not use `arr[i]`. |
| 2 | Write `void swap(int*, int*)` and call it on two locals. | Dereference before assigning. |
| 3 | Return a quotient and remainder through reference parameters. | Out-parameters vs a `pair`. |

> Part of [CH 09 — Pointers & References](../README.md).
