# Queue

`std::queue` is a container adapter that provides FIFO (First In, First Out) behavior.
By default it is backed by a `deque`.

## Basic usage

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creating a queue
    queue<int> q;
    //  insertion and deletion

    q.push(10);
    // 10
    q.push(20);
    // 10,20
    q.push(30);
    // 10,20,30
    q.push(40);
    // 10,20,30,40
    cout << q.size() << endl; // 4


    return 0;
}
```

## Member functions

- `push(x)` / `emplace(x)` — insert at the rear
- `pop()` — remove from the front
- `front()` — access the first element
- `back()` — access the last element
- `size()` — number of elements
- `empty()` — whether the queue is empty
- `swap(q2)` — swap contents with another queue

## Example files

See `01 Basics/` for one-file-per-function examples: `_01_basic_of_queue.cpp`, `_02_push_and_pop.cpp`, `_03_front_and_back.cpp`, `_04_size_and_empty.cpp`, `_05_swap.cpp`, `_06_emplace.cpp`, `_07_traversing_queue.cpp`.