# Vector — Member Functions

One `.cpp` file per `std::vector` member function, demonstrating usage with inline state comments.

## Files

| File | Function |
|------|----------|
| `_01_begin.cpp` | `begin()` — iterator to first element |
| `_02_insertion.cpp` | `insert()` — insert element(s) at position |
| `_03_pop_back.cpp` | `pop_back()` — remove last element |
| `_04_front_back.cpp` | `front()` / `back()` — access first/last element |
| `_05_empty.cpp` | `empty()` — check if vector is empty |
| `_06_at_and_index.cpp` | `at()` / `operator[]` — element access |
| `_07_capacity_of_vector.cpp` | `capacity()` — allocated storage |
| `_08_reserve.cpp` | `reserve()` — request capacity change |
| `_09_clear_function.cpp` | `clear()` — remove all elements |
| `_10_insert_function.cpp` | `insert()` — insert element |
| `_11_swap.cpp` | `swap()` — swap contents with another vector |
| `_12_for_each_loop.cpp` | Range-based for loop iteration |
| `_13_iterator.cpp` | Iterator usage |

## Example Pattern

Each file follows this pattern:
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    // ... operation ...
    cout << "result: " << ... << endl;
    return 0;
}
```

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Erase all even numbers with the erase-remove idiom. | `remove_if` + `erase`. |
| 2 | Insert 99 at index 3, then erase it. | `insert(begin() + 3, 99)`. |
| 3 | Reserve 100 elements and observe `capacity()`. | Reserve changes capacity, not size. |

> Part of [CH 13 — Standard Template Library (STL)](../../../README.md).
