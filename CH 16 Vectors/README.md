# CH 16 — Vectors & Memory

A dedicated vectors chapter that starts with memory: how a fixed-size array is laid out, where it lives, and why dynamic storage is the next step.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Basics of the vector/`](01%20Basics%20of%20the%20vector/) | Static memory allocation, fixed capacity, and element addresses. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Inspect static memory allocation and the address of the first element. | [`_01_memory_location.cpp`](01%20Basics%20of%20the%20vector/_01_memory_location.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Create an array with `new[]`, print its addresses, then release it with `delete[]`. | Dynamic storage has a different lifetime. |
| 2 | Compare a fixed array with `std::vector` as it grows. | Watch `size()` and `capacity()`. |
| 3 | Implement a tiny dynamic array with `new[]`, `push_back`, and `resize`. | Reallocate and copy when full. |
| 4 | Explain the difference between `sizeof(array)` and the number of elements. | `sizeof` is bytes; divide by `sizeof(element)`. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 16 Vectors/01 Basics of the vector/_01_memory_location.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 15 Strings](../CH%2015%20char%20array's%20and%20strings/README.md)
