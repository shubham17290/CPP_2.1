# CH 05 — Break & Continue

Control loop flow with `break` and `continue`, then use them to skip work, stop early, and filter ranges.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Break/`](01%20Break/) | Leaving a loop early and a practice problem. |
| [`02 Continue/`](02%20Continue/) | Skipping the rest of an iteration and a practice problem. |
| [`Quality Questions/`](Quality%20Questions/) | Print primes in a range with break/continue. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Print all primes in a range using `break` and `continue`. | [`_01_prime_in_range.cpp`](Quality%20Questions/_01_prime_in_range.cpp) |
| 2 | Demonstrate an early `break`. | [`_01_break.cpp`](01%20Break/_01_break.cpp) |
| 3 | Demonstrate `continue` in a loop. | [`_01_continue.cpp`](02%20Continue/_01_continue.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Find the first multiple of 7 in `[a, b]`. | Break as soon as it is found. |
| 2 | Print 1 to 50 while skipping multiples of 3. | Use `continue`. |
| 3 | Keep reading numbers until 0 is entered and sum only the positives. | Combine `while` with `continue`. |
| 4 | Search an array for a value and stop at the first match. | Break out of the loop and report the index. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 05 Statements/Quality Questions/_01_prime_in_range.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 04 Loops](../CH%2004%20Loops/README.md) · [Next: CH 06 Patterns →](../CH%2006%20Patterns/README.md)
