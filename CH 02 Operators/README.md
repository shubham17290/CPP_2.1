# CH 02 — Operators

Arithmetic, relational, logical, bitwise, and assignment operators, plus type casting and the precedence rules that decide what an expression actually does.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`1 Constants/`](1%20Constants/) | `const` values and why they are useful. |
| [`2 Type Casting/`](2%20Type%20Casting/) | Implicit and explicit conversions. |
| [`3 Predict the output/`](3%20Predict%20the%20output/) | Short expressions to evaluate without running the code. |
| [`4 Operators/`](4%20Operators/) | Binary, unary, relational, logical, and assignment operators. |
| [`5 Assignment HW/`](5%20Assignment%20HW/) | Three homework-style operator exercises. |
| [`6 Assignment Questions/`](6%20Assignment%20Questions/) | Factorial, multiplication table, Armstrong, prime, and Fibonacci solutions. |
| [`Quality Questions/`](Quality%20Questions/) | Bitwise operations and compound assignment. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Demonstrate bitwise AND, OR, XOR, NOT, and shifts. | [`_01_bitwise_operations.cpp`](Quality%20Questions/_01_bitwise_operations.cpp) |
| 2 | Update a value with compound assignment operators. | [`_02_compound_assignment.cpp`](Quality%20Questions/_02_compound_assignment.cpp) |
| 3 | Compute the factorial of a number. | [`_01_factorial.cpp`](6%20Assignment%20Questions/01%20Solutions/_01_factorial.cpp) |
| 4 | Print the multiplication table of a number. | [`_02_multiplication_table.cpp`](6%20Assignment%20Questions/01%20Solutions/_02_multiplication_table.cpp) |
| 5 | Check whether a number is an Armstrong number. | [`_03_armstrong_number.cpp`](6%20Assignment%20Questions/01%20Solutions/_03_armstrong_number.cpp) |
| 6 | Check whether a number is prime. | [`_04_prime_number.cpp`](6%20Assignment%20Questions/01%20Solutions/_04_prime_number.cpp) |
| 7 | Print the first n Fibonacci numbers. | [`_05_fibonacci.cpp`](6%20Assignment%20Questions/01%20Solutions/_05_fibonacci.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Evaluate `a += b *= c - 2` for `a = 5`, `b = 3`, `c = 4`. | Assignment is right-associative. |
| 2 | Check whether a number is even or odd using `n & 1`. | The least-significant bit decides parity. |
| 3 | Swap two integers using XOR. | `a ^= b; b ^= a; a ^= b;` |
| 4 | Explain the difference between `(float) a / b` and `a / b` when both are `int`. | Integer division happens before the cast unless one operand is floating-point. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 02 Operators/Quality Questions/_01_bitwise_operations.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 01 Variables](../CH%2001%20Var%20and%20DT/README.md) · [Next: CH 03 Conditionals →](../CH%2003%20Conditionals/README.md)
