# CH 12 — Arrays II & Sorting

Sorting is the bridge between array basics and real algorithms. This chapter implements bubble, selection, insertion, and counting sort, then uses the built-in `sort()` with custom comparators.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Sorting/01 bubble sort/`](01%20Sorting/01%20bubble%20sort/) | Bubble sort and an optimised early-exit version. |
| [`01 Sorting/02 selection sort/`](01%20Sorting/02%20selection%20sort/) | Selection sort (the file is named `_01_insertion_sort.cpp`, but the logic is selection sort). |
| [`01 Sorting/03 insertion sort/`](01%20Sorting/03%20insertion%20sort/) | Insertion sort on an integer array. |
| [`01 Sorting/04 Counting sort/`](01%20Sorting/04%20Counting%20sort/) | Counting sort with negative-number handling. |
| [`01 Sorting/05 in built sort/`](01%20Sorting/05%20in%20built%20sort/) | Ascending and descending `std::sort`. |
| [`01 Sorting/06 Practice question/`](01%20Sorting/06%20Practice%20question/) | Descending insertion sort on a character array. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Bubble sort an integer array. | [`_01_bubble_sort.cpp`](01%20Sorting/01%20bubble%20sort/_01_bubble_sort.cpp) |
| 2 | Bubble sort with an early-exit optimisation. | [`_02_bubble_sort_with_optimization.cpp`](01%20Sorting/01%20bubble%20sort/_02_bubble_sort_with_optimization.cpp) |
| 3 | Selection sort an integer array. | [`_01_insertion_sort.cpp`](01%20Sorting/02%20selection%20sort/_01_insertion_sort.cpp) |
| 4 | Insertion sort an integer array. | [`_01_insertion_sort.cpp`](01%20Sorting/03%20insertion%20sort/_01_insertion_sort.cpp) |
| 5 | Counting sort with negative values. | [`_01_countsort.cpp`](01%20Sorting/04%20Counting%20sort/_01_countsort.cpp) |
| 6 | Sort ascending with `std::sort`. | [`_01_inbuilt_sort_ascending.cpp`](01%20Sorting/05%20in%20built%20sort/_01_inbuilt_sort_ascending.cpp) |
| 7 | Sort descending with `std::sort`. | [`_02_decending_order_sorting.cpp`](01%20Sorting/05%20in%20built%20sort/_02_decending_order_sorting.cpp) |
| 8 | Sort a character array in descending order with insertion sort. | [`_01_solution.cpp`](01%20Sorting/06%20Practice%20question/_01_solution.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Check whether an array is sorted. | One pass, compare neighbours. |
| 2 | Merge two sorted arrays. | Two pointers, O(n + m). |
| 3 | Sort an array of 0s, 1s, and 2s in one pass. | Dutch national flag, three pointers. |
| 4 | Find the k-th smallest element without fully sorting. | Quickselect or a heap. |
| 5 | Sort pairs by second value, then first value. | Custom comparator with `std::sort`. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 12 Array II/01 Sorting/01 bubble sort/_01_bubble_sort.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 10 Arrays I](../CH%2010%20Array%20I/README.md) · [Next: CH 13 STL →](../CH%2013%20STL/README.md)
