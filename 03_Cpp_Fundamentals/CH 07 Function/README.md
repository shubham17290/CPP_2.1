# CH 07 — Functions

Break programs into reusable pieces: parameters, return values, scope, default arguments, overloading, references, and recursion.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Function intro/`](01%20Function%20intro/) | Basics, declarations, scope, and three practice problems. |
| [`02 Function Overloading/`](02%20Function%20Overloading/) | Multiple functions with the same name. |
| [`03 Function assignment/`](03%20Function%20assignment/) | The functions assignment PDF and five solutions. |
| [`04 Extra about function/`](04%20Extra%20about%20function/) | Pass-by-reference and extra practice. |
| [`Quality Questions/`](Quality%20Questions/) | Recursive factorial and recursive GCD. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Compute factorial recursively. | [`_01_recursive_factorial.cpp`](Quality%20Questions/_01_recursive_factorial.cpp) |
| 2 | Compute GCD recursively with Euclid's algorithm. | [`_02_gcd_recursive.cpp`](Quality%20Questions/_02_gcd_recursive.cpp) |
| 3 | Check whether a number is a palindrome. | [`_01__palindrome.cpp`](03%20Function%20assignment/02%20Solutions/01%20Codes/_01__palindrome.cpp) |
| 4 | Return the sum of digits of a number. | [`_02_sum_of_digit.cpp`](03%20Function%20assignment/02%20Solutions/01%20Codes/_02_sum_of_digit.cpp) |
| 5 | Apply the square formula. | [`_03_square_formula.cpp`](03%20Function%20assignment/02%20Solutions/01%20Codes/_03_square_formula.cpp) |
| 6 | Return the largest of three numbers. | [`_04_largest__of_three.cpp`](03%20Function%20assignment/02%20Solutions/01%20Codes/_04_largest__of_three.cpp) |
| 7 | Return the next character. | [`_05_return_the_next_char.cpp`](03%20Function%20assignment/02%20Solutions/01%20Codes/_05_return_the_next_char.cpp) |
| 8 | Compute a binomial coefficient with helper functions. | [`_03_binomial_coefficient.cpp`](01%20Function%20intro/04%20Practice%20problem/_03_binomial_coefficient.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Write `bool isPrime(int n)` and use it to print primes up to n. | Reuse the loop from CH 04. |
| 2 | Write `long long power(int base, int exp)` iteratively and recursively. | Compare the two versions. |
| 3 | Write `int fibonacci(int n)` recursively and memoise it. | Cache repeated states. |
| 4 | Overload `area()` for a circle and a rectangle. | Different parameter lists. |
| 5 | Return both quotient and remainder from one function. | Use reference parameters or a `pair`. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 07 Function/Quality Questions/_01_recursive_factorial.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 06 Patterns](../CH%2006%20Patterns/README.md) · [Next: CH 08 Binary Numbers →](../CH%2008%20Binary%20Number%20System/README.md)
