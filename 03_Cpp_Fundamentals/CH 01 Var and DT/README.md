# CH 01 — Variables & Data Types

The first real chapter: storing values, choosing the right data type, reading input, printing output, and doing small calculations with confidence.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 First code/`](01%20First%20code/) | The first C++ program and the compile/run loop. |
| [`02 Variables and Data Types/`](02%20Variables%20and%20Data%20Types/) | Declarations, initialisation, comments, and type basics. |
| [`03 Data Types/`](03%20Data%20Types/) | Integer, floating-point, character, and boolean examples. |
| [`04 input and output/`](04%20input%20and%20output/) | `cin`, `cout`, and arithmetic on user input. |
| [`05 assignment Questions/`](05%20assignment%20Questions/) | Starter assignments for square area, a three-item bill, simple interest, and circle area (the last file is a blank template). |
| [`Quality Questions/`](Quality%20Questions/) | Type conversion and ASCII value practice. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Convert between types implicitly and explicitly. | [`_01_type_conversion.cpp`](Quality%20Questions/_01_type_conversion.cpp) |
| 2 | Print the ASCII value of a character and convert back. | [`_02_ascii_value.cpp`](Quality%20Questions/_02_ascii_value.cpp) |
| 3 | Find the area of a square from its side. | [`_question_01.cpp`](05%20assignment%20Questions/_question_01.cpp) |
| 4 | Build a bill for three items (pencil, pen, eraser). | [`_question_02.cpp`](05%20assignment%20Questions/_question_02.cpp) |
| 5 | Calculate simple interest from principal, rate, and time. | [`_question_03.cpp`](05%20assignment%20Questions/_question_03.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Read two numbers and print their sum, difference, product, quotient, and remainder. | Use `/` and `%` carefully with integers. |
| 2 | Print the size in bytes of `int`, `char`, `float`, `double`, and `bool`. | Use `sizeof`. |
| 3 | Convert a lowercase letter to uppercase using ASCII arithmetic. | Subtract 32 from the character code. |
| 4 | Read five marks as `float` and print the average. | Accumulate, then divide by 5.0. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 01 Var and DT/Quality Questions/_01_type_conversion.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 00 Practice](../CH%2000%20Practice/README.md) · [Next: CH 02 Operators →](../CH%2002%20Operators/README.md)
