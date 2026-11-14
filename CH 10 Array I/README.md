# CH 10 — Arrays I

Store sequences in contiguous memory and practise the patterns that show up in interviews: searching, reversing, subarrays, Kadane's algorithm, stock profit, and trapping rainwater.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`00 Questions/`](00%20Questions/) | The array question set (PDF and images). |
| [`01 Basic and extra/`](01%20Basic%20and%20extra/) | Declaration, traversal, input, min/max, search, and reverse. |
| [`02 Array  01/`](02%20Array%20%2001/) | Core array lessons, including the array-pointer relationship. |
| [`03 Quality Questions/`](03%20Quality%20Questions/) | Second largest, rotation, and duplicate removal. |
| [`04 Array 02/`](04%20Array%2002/) | Subarrays, Kadane, stock profit, and trapping rainwater. |
| [`05 Assignment/`](05%20Assignment/) | Assignment PDF plus three solved interview-style problems. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Find the second largest element in one pass. | [`_01_second_largest.cpp`](03%20Quality%20Questions/_01_second_largest.cpp) |
| 2 | Rotate an array left by k positions. | [`_02_rotate_array.cpp`](03%20Quality%20Questions/_02_rotate_array.cpp) |
| 3 | Remove duplicates from a sorted array. | [`_03_remove_duplicates.cpp`](03%20Quality%20Questions/_03_remove_duplicates.cpp) |
| 4 | Check whether an array contains duplicates. | [`_01_contains_duplicate.cpp`](05%20Assignment/02%20solution/_01_contains_duplicate.cpp) |
| 5 | Search in a rotated sorted array. | [`_02_search_in_rotated_sorted_array.cpp`](05%20Assignment/02%20solution/_02_search_in_rotated_sorted_array.cpp) |
| 6 | Find the maximum product subarray. | [`_03_maximum_product_subarray.cpp`](05%20Assignment/02%20solution/_03_maximum_product_subarray.cpp) |
| 7 | Find the maximum subarray sum with Kadane's algorithm. | [`_04_kadans_algorithms.cpp`](04%20Array%2002/_04_kadans_algorithms.cpp) |
| 8 | Buy and sell a stock for maximum profit. | [`_05_buy_and_sell_stocks.cpp`](04%20Array%2002/_05_buy_and_sell_stocks.cpp) |
| 9 | Compute trapped rainwater. | [`_06_trapping_water.cpp`](04%20Array%2002/_06_trapping_water.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Move all zeroes to the end while keeping the order of non-zero elements. | Two pointers, stable partition. |
| 2 | Find the missing number in `1..n`. | Sum formula or XOR. |
| 3 | Solve two-sum on a sorted array. | Two pointers from both ends. |
| 4 | Merge two sorted arrays into a third array. | Compare the fronts and advance. |
| 5 | Find the majority element. | Sorting, hash map, or Boyer-Moore voting. |
| 6 | Print all subarrays of an array. | Nested loops with a running start. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 10 Array I/03 Quality Questions/_01_second_largest.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 09 Pointers](../CH%2009%20Pointers/README.md) · [Next: CH 12 Sorting →](../CH%2012%20Array%20II/README.md)
