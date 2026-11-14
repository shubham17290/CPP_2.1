# CH 14 — 2D Arrays & Matrices

Move from one dimension to two: matrix input/output, traversal, diagonal sums, sorted-matrix search, spiral order, and the relationship between 2D arrays and pointers.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 intro/`](01%20intro/) | Declaring and understanding a 2D array. |
| [`02 input and output/`](02%20input%20and%20output/) | Reading and printing a matrix. |
| [`03 problem solving/`](03%20problem%20solving/) | Spiral matrix, diagonal sum, and sorted-matrix search. |
| [`04 Matrix pointer/`](04%20Matrix%20pointer/) | How a 2D array behaves as a pointer. |
| [`05 assignment/`](05%20assignment/) | The assignment PDF and solution files (one is a blank placeholder). |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Print a matrix in spiral order. | [`_01_basic_of_sprial_matrix.cpp`](03%20problem%20solving/00%20Spiral%20Matrix/_01_basic_of_sprial_matrix.cpp) |
| 2 | Compute the sum of the main diagonal. | [`_04_diagonal_sum.cpp`](03%20problem%20solving/_04_diagonal_sum.cpp) |
| 3 | Search a row-wise and column-wise sorted matrix. | [`_05_search_in_sorted_matrix.cpp`](03%20problem%20solving/_05_search_in_sorted_matrix.cpp) |
| 4 | Count all 7s in a 2D array. | [`_01_solution.cpp`](05%20assignment/02%20solution/_01_solution.cpp) |
| 5 | Sum the second row of a matrix. | [`_02_solution.cpp`](05%20assignment/02%20solution/_02_solution.cpp) |
| 6 | Transpose a 2x3 matrix into 3x2. | [`_03_solution.cpp`](05%20assignment/02%20solution/_03_solution.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Rotate a matrix by 90 degrees clockwise. | Transpose, then reverse each row. |
| 2 | Print the boundary of a matrix clockwise. | Four loops, shrinking bounds. |
| 3 | Multiply two matrices. | Triple loop with compatible dimensions. |
| 4 | Check whether a matrix is symmetric. | Compare `a[i][j]` with `a[j][i]`. |
| 5 | Print row-wise and column-wise sums. | Two separate passes. |
| 6 | Find the saddle point of a matrix. | Minimum in its row and maximum in its column. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 14 2D Arrays/03 problem solving/_04_diagonal_sum.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 13 STL](../CH%2013%20STL/README.md) · [Next: CH 15 Strings →](../CH%2015%20char%20array's%20and%20strings/README.md)
