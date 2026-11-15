# Set

Associative containers that store unique elements. `std::set` is ordered (sorted by value), while `std::unordered_set` is unordered (hash-based).

## Folders

| Folder | Contents |
|--------|----------|
| `01 ordered set` | `std::set` — ordered set (red-black tree) |
| `02 unord set` | `std::unordered_set` — unordered set (hash table) |

## Common Member Functions (both)

- `insert(x)` — insert element (ignored if already present)
- `erase(x)` / `erase(iterator)` — remove element
- `find(x)` — find iterator to element
- `count(x)` — count occurrences (0 or 1)
- `empty()` — check if set is empty
- `size()` — number of elements
- `clear()` — remove all elements
- `swap(s2)` — swap contents with another set

## Headers

- `std::set` — `<set>`
- `std::unordered_set` — `<unordered_set>`

<!-- practice-questions -->

## 🧪 Practice Questions

Try these prompts after reading the examples above. They are deliberately left unsolved here, so you can practise the concept yourself.

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Remove duplicates from an array with a set. | Insert, then iterate. |
| 2 | Find the intersection of two arrays. | Set membership or `set_intersection`. |
| 3 | Find the missing number in `1..n`. | Set difference or sum formula. |
| 4 | Check whether two arrays share an element. | Unordered set lookup. |

> Part of [CH 13 — Standard Template Library (STL)](../../README.md).
