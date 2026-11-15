# CH 13 — Standard Template Library (STL)

The largest chapter: containers, iterators, algorithms, utilities, and allocators. Each topic has focused examples, and each container or algorithm folder has its own README.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`00 vector(APC)/`](00%20vector%28APC%29/) | A first pass over `std::vector`: syntax, functions, and static vs dynamic behaviour. |
| [`01 Containers/`](01%20Containers/) | Vector, list, queue, stack, deque, priority queue, map, and set. |
| [`02 Iterators/`](02%20Iterators/) | Iterator basics and the five iterator categories. |
| [`03 Algorithms/`](03%20Algorithms/) | Iterating, numeric, searching, min/max, heap, and set algorithms. |
| [`05 Utilities/`](05%20Utilities/) | Topic notes for pairs, tuples, optional, swap, and related helpers (no example files yet). |
| [`06 Allocators/`](06%20Allocators/) | Topic notes on how containers obtain and release memory (no example files yet). |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Create and traverse a vector. | [`_01_vector_syntax.cpp`](00%20vector%28APC%29/01%20basics%20of%20the%20vector/_01_vector_syntax.cpp) |
| 2 | Add and remove elements with `push_back` and `pop_back`. | [`_02_push_back.cpp`](00%20vector%28APC%29/02%20Vector%20Function/_02_push_back.cpp) |
| 3 | Sort and reverse a range. | [`_06_sort.cpp`](03%20Algorithms/01%20iterators%20and%20iterating%20algorithms/_06_sort.cpp) |
| 4 | Search a sorted range with `binary_search`. | [`_01_binary_search.cpp`](03%20Algorithms/03%20Searching%20and%20finding%20algorithms/01%20binary%20search/_01_binary_search.cpp) |
| 5 | Build an unordered map. | [`_01_introduction.cpp`](01%20Containers/07%20Map/01%20UnOrdered%20Map/01%20Basics/_01_introduction.cpp) |
| 6 | Store unique values in an ordered set. | [`_01_basic_of_set.cpp`](01%20Containers/08%20Set/01%20ordered%20set/01%20bsics%20of%20set/_01_basic_of_set.cpp) |
| 7 | Use a max-heap priority queue. | [`_01_basic.cpp`](01%20Containers/06%20priority%20queue/01%20Max%20heap%20DS/01%20bsics%20of%20priority%20queue/_01_basic.cpp) |
| 8 | Apply `accumulate` and `iota`. | [`_01_numeric_basic.cpp`](03%20Algorithms/02%20Numeric%20algorithms/_01_numeric_basic.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Count word frequencies with `unordered_map`. | Read words, then `++freq[word]`. |
| 2 | Find the k-th largest element with `priority_queue`. | Keep a min-heap of size k. |
| 3 | Check balanced brackets with `stack`. | Push openers, pop and match closers. |
| 4 | Remove duplicates from a vector. | Sort, then `unique` + `erase`. |
| 5 | Find the first non-repeating character. | Map counts, then scan the original order. |
| 6 | Implement sliding-window maximum with `deque`. | Keep indices in decreasing value order. |
| 7 | Group anagrams using a map of sorted strings. | The sorted word is the key. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 13 STL/00 vector(APC)/01 basics of the vector/_01_vector_syntax.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 12 Sorting](../CH%2012%20Array%20II/README.md) · [Next: CH 14 2D Arrays →](../CH%2014%202D%20Arrays/README.md)
