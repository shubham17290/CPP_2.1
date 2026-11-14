# CH 03 — Conditional Statements

Make programs choose: `if`, `else if`, the ternary operator, `switch`, and a small calculator project that combines them.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 if else statement/`](01%20if%20else%20statement/) | Basic branching and two practice questions. |
| [`02 else if statement/`](02%20else%20if%20statement/) | Multi-way decisions and a practice question. |
| [`03 Ternamry operator/`](03%20Ternamry%20operator/) | The conditional operator and a comparison example. |
| [`04 Switch Statement/`](04%20Switch%20Statement/) | Switch-based branching basics. |
| [`05 Project/`](05%20Project/) | A calculator built with conditional logic. |
| [`06 Assignment Questions/`](06%20Assignment%20Questions/) | Two practice sessions covering positive/negative, grades, and more. |
| [`Quality Questions/`](Quality%20Questions/) | Leap year, grade calculator, and vowel/consonant checks. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Check whether a year is a leap year. | [`_01_leap_year.cpp`](Quality%20Questions/_01_leap_year.cpp) |
| 2 | Convert marks to a grade with `if`/`else if`. | [`_02_grade_calculator.cpp`](Quality%20Questions/_02_grade_calculator.cpp) |
| 3 | Check whether a character is a vowel or consonant with `switch`. | [`_03_vowel_consonant.cpp`](Quality%20Questions/_03_vowel_consonant.cpp) |
| 4 | Print whether a number is positive, negative, or zero. | [`_question_01.cpp`](06%20Assignment%20Questions/Practice%20session%201/_question_01.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Find the largest of three numbers. | Nested `if` or a running maximum. |
| 2 | Classify a character as uppercase, lowercase, digit, or special. | ASCII ranges or `<cctype>` helpers. |
| 3 | Build a menu-driven calculator with `switch` and a division-by-zero guard. | Read the operator, then branch. |
| 4 | Print the number of days in a month, accounting for leap years. | Combine `switch` with the leap-year rule. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 03 Conditionals/Quality Questions/_01_leap_year.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 02 Operators](../CH%2002%20Operators/README.md) · [Next: CH 04 Loops →](../CH%2004%20Loops/README.md)
