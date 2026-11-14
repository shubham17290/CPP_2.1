# Quality Questions — CH 00 Practice

Curated, interview-style practice problems for this chapter. Each file is self-contained and compiles independently.

| # | File | Problem |
|---|------|---------|
| 1 | `_01_swap_without_temp.cpp` | Swap two integers without using a temporary variable. |
| 2 | `_02_operator_precedence_challenge.cpp` | Predict the output given operator precedence and side effects. |

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
| 1 | Evaluate `int x = 5; cout << x++ + ++x;` without running it. | Pre/post increment and sequence points. |
| 2 | Swap two integers using only `+` and `-`. | Three arithmetic steps, no temporary variable. |
| 3 | Write `void twice(int&)` and compare it with a pass-by-value version. | A reference aliases the original object. |

> Part of [CH 00 — Practice & Warm-Ups](../README.md).
