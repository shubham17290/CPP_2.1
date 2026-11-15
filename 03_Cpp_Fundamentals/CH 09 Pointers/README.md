# CH 09 — Pointers & References

Understand addresses, dereferencing, pointer arithmetic, and the difference between passing by value and passing by reference.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Basics/`](01%20Basics/) | Introductions, dereferencing, and a practice exercise. |
| [`02 Passing arguments/`](02%20Passing%20arguments/) | Pass-by-value, pass-by-reference, and six worked examples. |
| [`Quality Questions/`](Quality%20Questions/) | Pointer arithmetic and swapping through pointers. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Walk an array with pointer arithmetic. | [`_01_pointer_arithmetic.cpp`](Quality%20Questions/_01_pointer_arithmetic.cpp) |
| 2 | Swap two values using pointers. | [`_02_swap_using_pointers.cpp`](Quality%20Questions/_02_swap_using_pointers.cpp) |
| 3 | Compare pass-by-value behaviour. | [`_01_pass_by_value.cpp`](02%20Passing%20arguments/_01_pass_by_value.cpp) |
| 4 | Update the caller's value through a reference parameter. | [`_02_pass_by_ref.cpp`](02%20Passing%20arguments/_02_pass_by_ref.cpp) |
| 5 | Work with references as aliases. | [`_06_ref.cpp`](02%20Passing%20arguments/_06_ref.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Traverse an array using only a pointer and a sentinel. | Do not use `arr[i]`. |
| 2 | Write `void swap(int*, int*)` and call it on two locals. | Dereference before assigning. |
| 3 | Return a quotient and remainder through reference parameters. | Out-parameters are one option; compare with `pair`. |
| 4 | Explain why a dangling pointer is dangerous. | Lifetime vs address. |
| 5 | Use a pointer to a pointer to change a pointer in the caller. | `int**`. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 09 Pointers/Quality Questions/_01_pointer_arithmetic.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 08 Binary Numbers](../CH%2008%20Binary%20Number%20System/README.md) · [Next: CH 10 Arrays I →](../CH%2010%20Array%20I/README.md)
