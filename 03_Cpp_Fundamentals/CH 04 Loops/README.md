# CH 04 — Loops

Repeat work with `for`, `while`, and `do-while`, then use loops for digit problems, series, and prime-number checks.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 for loops/`](01%20for%20loops/) | Counting loops and three practice questions. |
| [`02 While Loops/`](02%20While%20Loops/) | Condition-driven repetition. |
| [`03 practice questions/`](03%20practice%20questions/) | Patterns, digit reversal, and digit sums. |
| [`04 Do while loop/`](04%20Do%20while%20loop/) | Run-at-least-once loops. |
| [`05 problems/`](05%20problems/) | Prime-number problems solved with loops. |
| [`Quality Questions/`](Quality%20Questions/) | Fibonacci, Armstrong, and GCD/LCM. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Print the first n Fibonacci numbers. | [`_01_fibonacci_series.cpp`](Quality%20Questions/_01_fibonacci_series.cpp) |
| 2 | Check whether a number is an Armstrong number. | [`_02_armstrong_number.cpp`](Quality%20Questions/_02_armstrong_number.cpp) |
| 3 | Compute GCD and LCM of two numbers. | [`_03_gcd_lcm.cpp`](Quality%20Questions/_03_gcd_lcm.cpp) |
| 4 | Find the sum of the digits of a number. | [`_03_sum_of_digits.cpp`](03%20practice%20questions/_03_sum_of_digits.cpp) |
| 5 | Reverse the digits of a number. | [`_05_reverse_of_a_digit.cpp`](03%20practice%20questions/_05_reverse_of_a_digit.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Print the multiplication table of n from 1 to 10. | A single `for` loop. |
| 2 | Count the digits of an integer without converting it to a string. | Repeatedly divide by 10. |
| 3 | Check whether a number is prime using an early `break`. | Test divisors up to `sqrt(n)`. |
| 4 | Print all factors of a number. | Loop to `n / 2` or `sqrt(n)`. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 04 Loops/Quality Questions/_01_fibonacci_series.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 03 Conditionals](../CH%2003%20Conditionals/README.md) · [Next: CH 05 Break & Continue →](../CH%2005%20Statements/README.md)
