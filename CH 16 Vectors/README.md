# CH 16 — Vectors & Memory

A dedicated vectors chapter that starts with memory: how a fixed-size array is laid out, where it lives, and why dynamic storage is the next step.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 1D vector/`](01%201D%20vector/) | The one-dimensional examples: memory, arrays, and `std::vector`. |
| [`01 1D vector/01 Basics of the vector/`](01%201D%20vector/01%20Basics%20of%20the%20vector/) | Static memory allocation, fixed capacity, and element addresses. |
| [`01 1D vector/02 2D array/`](01%201D%20vector/02%202D%20array/) | A 2D array passed to functions with pointers and pointer arithmetic. |
| [`01 1D vector/03 vector/`](01%201D%20vector/03%20vector/) | `std::vector` construction, size and capacity, operations, and pair sum. |
| [`02 2D vector/`](02%202D%20vector/) | A grid stored as `vector<vector<int>>` and traversed with nested loops. |
| [`03 practice questions/`](03%20practice%20questions/) | Extra practice with `push_back`, `size()`, and `capacity()`. |
| [`04 Assignment/`](04%20Assignment/) | A [PDF question set](04%20Assignment/01%20questions/Vectors%20Questions.pdf) with room for written and coding solutions. |
| [`04 Assignment/03 coding solution/`](04%20Assignment/03%20coding%20solution/) | Coding workspace for the assignment: LeetCode 645, 11, and 3Sum. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Inspect static memory allocation and the address of the first element. | [`_01_memory_location.cpp`](01%201D%20vector/01%20Basics%20of%20the%20vector/_01_memory_location.cpp) |
| 2 | Print, sum, and update a 2D array using pointers and functions. | [`_01_2d_array.cpp`](01%201D%20vector/02%202D%20array/_01_2d_array.cpp) |
| 3 | Create a vector, add elements, and print its contents. | [`_01_intro_to_vector_ds.cpp`](01%201D%20vector/03%20vector/_01_intro_to_vector_ds.cpp) |
| 4 | Compare a vector's `size()` with its `capacity()` as it grows. | [`_02_vector_size_and_capacity.cpp`](01%201D%20vector/03%20vector/_02_vector_size_and_capacity.cpp) |
| 5 | Practise common vector operations such as `push_back`, `pop_back`, and iteration. | [`_03_vector_operation.cpp`](01%201D%20vector/03%20vector/_03_vector_operation.cpp) |
| 6 | Solve two-sum on a sorted array with two pointers. | [`_04_pair_sum.cpp`](01%201D%20vector/03%20vector/_04_pair_sum.cpp) |
| 7 | Store a 4×4 grid in a 2D vector and print it row by row. | [`_01_2d_vector_into.cpp`](02%202D%20vector/_01_2d_vector_into.cpp) |
| 8 | Track how a vector's size and capacity change after five `push_back` calls. | [`_01_problem_solving.cpp`](03%20practice%20questions/_01_problem_solving.cpp) |

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
g++ -std=c++17 -O2 -Wall -Wextra "CH 16 Vectors/01 1D vector/01 Basics of the vector/_01_memory_location.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 15 Strings](../CH%2015%20char%20array's%20and%20strings/README.md)
