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