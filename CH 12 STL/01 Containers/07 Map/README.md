# Map

Associative containers that store key-value pairs. `std::map` is ordered (sorted by key), while `std::unordered_map` is unordered (hash-based).

## Folders

| Folder | Contents |
|--------|----------|
| `01 UnOrdered Map` | `std::unordered_map` — hash map |
| `02 Ordered Map` | `std::map` — ordered map (red-black tree) |

## Common Member Functions (both)

- `insert({key, value})` — insert key-value pair
- `operator[]` — access/modify value by key
- `at(key)` — access value by key (throws if not found)
- `erase(key)` — remove element by key
- `find(key)` — find iterator to element
- `count(key)` — count elements with key (0 or 1)
- `empty()` — check if map is empty
- `size()` — number of elements
- `clear()` — remove all elements
- `swap(m2)` — swap contents with another map

## Headers

- `std::map` — `<map>`
- `std::unordered_map` — `<unordered_map>`
