# Vector

`std::vector` is a sequence container that encapsulates dynamic size arrays. Elements are stored contiguously, allowing random access via index.

## Folders

| Folder | Contents |
|--------|----------|
| `01 basics` | Introduction to vector, declaration, initialization |
| `02 member functions in vector` | One file per member function (begin, push_back, pop_back, etc.) |
| `03 advance of vector` | 2D vectors, jagged arrays, advanced usage |

## Common Member Functions

- `push_back(x)` — insert element at the end
- `pop_back()` — remove last element
- `begin()` / `end()` — iterators to start and end
- `front()` / `back()` — access first and last element
- `at(i)` / `operator[]` — element access by index
- `empty()` — check if vector is empty
- `size()` — number of elements
- `capacity()` — allocated storage capacity
- `reserve(n)` — request capacity change
- `clear()` — remove all elements
- `insert(pos, x)` — insert element at position
- `erase(pos)` — remove element at position
- `swap(v)` — swap contents with another vector

## Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;
    marks.push_back(90);
    marks.push_back(91);
    marks.push_back(92);

    cout << "Size: " << marks.size() << endl;
    cout << "First element: " << marks.front() << endl;

    return 0;
}
```
