# Allocators

Allocators control how STL containers obtain and release memory. This topic
covers the default allocator and the allocator interface used by containers.

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Allocate and deallocate an array with `std::allocator`. | `allocate(n)`, then `deallocate`. |
| 2 | Print `vector<int>::allocator_type`. | Containers expose their allocator type. |
| 3 | Explain why `reserve` reduces reallocations. | Capacity vs size. |

> Part of [CH 13 — Standard Template Library (STL)](../README.md).
