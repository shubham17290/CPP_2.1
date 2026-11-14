# STL Containers

This chapter covers the Standard Template Library (STL) containers in C++. Each container is implemented as a class template and provides specific data structures with associated member functions.

## Containers Covered

| Folder | Container | Description |
|--------|-----------|-------------|
| `01 vector DS` | `std::vector` | Dynamic array with random access |
| `02 List DS` | `std::list` | Doubly-linked list |
| `03 Queue DS` | `std::queue` | FIFO (First In, First Out) adapter |
| `04 Stack DS` | `std::stack` | LIFO (Last In, First Out) adapter |
| `05 Deque DS` | `std::deque` | Double-ended queue |
| `06 priority queue` | `std::priority_queue` | Heap-based priority queue |
| `07 Map` | `std::map` / `std::unordered_map` | Associative key-value containers |
| `08 Set` | `std::set` / `std::unordered_set` | Associative unique-element containers |

## Folder Structure

Each container folder contains:
- **Basics** — Introduction and basic operations
- **Member functions / Functions** — One `.cpp` file per member function with detailed comments

## Example files

See individual container README files for details on each container's functions and example code.

## Header Reference

| Container | Header |
|-----------|--------|
| `vector` | `<vector>` |
| `list` | `<list>` |
| `queue` | `<queue>` |
| `stack` | `<stack>` |
| `deque` | `<deque>` |
| `priority_queue` | `<queue>` |
| `map` | `<map>` |
| `unordered_map` | `<unordered_map>` |
| `set` | `<set>` |
| `unordered_set` | `<unordered_set>` |

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Count word frequencies with `unordered_map`. | Read words, then `++freq[word]`. |
| 2 | Find the k-th largest element with `priority_queue`. | Keep a min-heap of size k. |
| 3 | Check balanced brackets with `stack`. | Push openers, pop and match closers. |
| 4 | Implement sliding-window maximum with `deque`. | Keep indices in decreasing value order. |
| 5 | Remove duplicates from a vector. | Sort, then `unique` + `erase`. |

> Part of [CH 13 — Standard Template Library (STL)](../README.md).
