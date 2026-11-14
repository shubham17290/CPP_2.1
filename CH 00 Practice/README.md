# CH 00 — Practice & Warm-Ups

A short warm-up chapter for the habits used everywhere else in the repo: writing small functions, passing arguments by reference, and reading expressions the way the compiler does.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 function/`](01%20function/) | Pass-by-reference warm-ups and function-call practice. |
| [`02 operators precedence/`](02%20operators%20precedence/) | Tracing expressions with mixed operator precedence. |
| [`Quality Questions/`](Quality%20Questions/) | Swap without a temporary variable and an operator-precedence challenge. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Swap two integers without a temporary variable. | [`_01_swap_without_temp.cpp`](Quality%20Questions/_01_swap_without_temp.cpp) |
| 2 | Predict the output of an expression with precedence and side effects. | [`_02_operator_precedence_challenge.cpp`](Quality%20Questions/_02_operator_precedence_challenge.cpp) |
| 3 | Update a variable through a reference parameter. | [`_01_pass_by_reference.cpp`](01%20function/_01_pass_by_reference.cpp) |
| 4 | Compare a second pass-by-reference example with pass-by-value behaviour. | [`_02_pass_by_reference.cpp`](01%20function/_02_pass_by_reference.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Evaluate `int x = 5; cout << x++ + ++x;` by hand. | Pre/post increment and sequence points. |
| 2 | Swap two numbers using only `+` and `-`. | Three arithmetic steps, no temporary variable. |
| 3 | Write `void twice(int&)` and compare its output with a pass-by-value version. | A reference aliases the original object. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 00 Practice/Quality Questions/_01_swap_without_temp.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [Next: CH 01 Variables →](../CH%2001%20Var%20and%20DT/README.md)
