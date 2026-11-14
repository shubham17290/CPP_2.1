# Quality Questions — CH 02 Operators

Curated, interview-style practice problems for this chapter. Each file is self-contained and compiles independently.

| # | File | Problem |
|---|------|---------|
| 1 | `_01_bitwise_operations.cpp` | Demonstrate bitwise AND, OR, XOR, NOT and shifts. |
| 2 | `_02_compound_assignment.cpp` | Use compound assignment operators to update a value. |

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
| 1 | Evaluate `a += b *= c - 2` for `a = 5`, `b = 3`, `c = 4`. | Assignment is right-associative. |
| 2 | Check whether a number is even or odd using `n & 1`. | The least-significant bit decides parity. |
| 3 | Swap two integers using XOR. | `a ^= b; b ^= a; a ^= b;` |

> Part of [CH 02 — Operators](../README.md).
