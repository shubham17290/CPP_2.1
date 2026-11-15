# Quality Questions — CH 08 Binary Number System

Curated, interview-style practice problems for this chapter. Each file is self-contained and compiles independently.

| # | File | Problem |
|---|------|---------|
| 1 | `_01_set_bits_count.cpp` | Count set bits (Brian Kernighan's algorithm). |
| 2 | `_02_power_of_two.cpp` | Check if a number is a power of two. |

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
| 1 | Convert decimal to binary without `bitset`. | Repeatedly divide by 2 and collect remainders. |
| 2 | Count the zero bits in a 32-bit integer. | Inspect every bit with a mask. |
| 3 | Reverse the bits of a 32-bit unsigned integer. | Shift the result left and read the input right. |

> Part of [CH 08 — Binary Number System](../README.md).
