# Iterator Basics

Introduces iterators as the common interface for traversing STL containers.

## Files

- `_01_iterator_basics.cpp` — `begin()`, `end()`, dereferencing, and incrementing an iterator

## Practice Questions

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Traverse a vector with an iterator and print each value. | `for (auto it = v.begin(); it != v.end(); ++it)`. |
| 2 | Modify every element through an iterator. | Dereference with `*it`. |
| 3 | Compare iterator traversal with index traversal. | Both are O(n). |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
