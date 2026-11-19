# C++ Revision --- Block 3: Arrays, Pointers & Memory

**Revision time:** 35 minutes\
**Coverage:** Arrays, multidimensional arrays, strings, pointers,
references, dynamic memory, and basic memory-safety concepts.

------------------------------------------------------------------------

## 1. Learning objectives

By the end of this block, you should be able to:

-   Declare, initialize, access, and traverse arrays.
-   Work with two-dimensional arrays.
-   Use `std::string` for text.
-   Explain what pointers store and how dereferencing works.
-   Distinguish pointers from references.
-   Allocate and release dynamic memory with `new` and `delete`.
-   Recognize null, wild, and dangling pointers.
-   Avoid common array and memory errors.

## 2. Important theory --- quick notes

### 2.1 Arrays

An array stores a fixed number of elements of the same type in
contiguous memory locations.

``` cpp
int marks[5] = {70, 80, 90, 60, 85};
```

Important points:

-   Array indexing starts at `0`.
-   For an array of length `n`, valid indices are `0` through `n - 1`.
-   Accessing outside this range causes undefined behavior.
-   A built-in array's size is fixed after it is created.
-   Built-in arrays do not automatically perform bounds checking.

### 2.2 Array traversal

Use a loop to visit each element.

``` cpp
for (int i = 0; i < 5; i++) {
    cout << marks[i] << '\\n';
}
```

For a built-in array in the same scope, its element count can be
calculated with:

``` cpp
int size = sizeof(marks) / sizeof(marks[0]);
```

This expression works only where `marks` is still an array, not after it
has decayed to a pointer (such as in a function parameter).

### 2.3 Two-dimensional arrays

A two-dimensional array is an array of arrays, commonly used to
represent rows and columns.

``` cpp
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Access an element using `matrix[row][column]`.

### 2.4 Strings

C++ provides `std::string` through the `<string>` header.

``` cpp
#include <string>

string name = "Shubham";
```

Useful operations:

  Operation                          Purpose
  ---------------------------------- ----------------------------------------
  `name.length()` or `name.size()`   Number of characters
  `name[0]`                          Access a character by index
  `name + "!"`                       Concatenate strings
  `getline(cin, name)`               Read a complete line, including spaces

After `cin >>` reads a value, a following `getline` may consume the
leftover newline. Use `cin.ignore(...)` appropriately before the
`getline` call.

### 2.5 Pointers

A pointer is an object that stores the address of another object or
function, or a null pointer value.

``` cpp
int number = 10;
int* ptr = &number;
```

-   `&number` obtains the address of `number`.
-   `ptr` stores that address.
-   `*ptr` dereferences the pointer to access the pointed-to object.

``` cpp
cout << *ptr;  // prints 10
*ptr = 25;     // changes number to 25
```

### 2.6 Null pointers

A null pointer does not point to an object or function.

``` cpp
int* ptr = nullptr;
```

Check a pointer before dereferencing it when it may be null.

``` cpp
if (ptr != nullptr) {
    cout << *ptr;
}
```

Never dereference a null pointer.

### 2.7 Pointers and arrays

In many expressions, an array name converts to a pointer to its first
element. This is commonly called array-to-pointer decay.

``` cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;

cout << ptr[1];  // 20
```

Pointer arithmetic advances in units of the pointed-to type, not
individual bytes.

### 2.8 References

A reference is an alias for an existing object.

``` cpp
int number = 10;
int& ref = number;

ref = 50;  // number becomes 50
```

Key differences:

  -----------------------------------------------------------------------
  Pointer                             Reference
  ----------------------------------- -----------------------------------
  Stores an address                   Acts as an alias

  Can be null                         Must be initialized to refer to an
                                      object

  Can be redirected to another object Cannot be reseated after
                                      initialization

  Uses `*` to dereference             Used like the referred object
  -----------------------------------------------------------------------

### 2.9 Dynamic memory

Dynamic allocation requests storage while the program is running.

``` cpp
int* ptr = new int(25);
delete ptr;
ptr = nullptr;
```

For a dynamically allocated array:

``` cpp
int* arr = new int[5];

// use arr

delete[] arr;
arr = nullptr;
```

Important: - Match `new` with `delete`. - Match `new[]` with
`delete[]`. - Do not use an object after its lifetime has ended. -
Prefer standard containers such as `std::vector` over manual dynamic
arrays in ordinary application code.

### 2.10 Common pointer errors

  -----------------------------------------------------------------------
  Term                                Meaning
  ----------------------------------- -----------------------------------
  Null pointer                        Points to no object or function

  Wild pointer                        Informal term for an uninitialized
                                      pointer

  Dangling pointer                    Pointer that no longer refers to a
                                      live object

  Memory leak                         Dynamically allocated memory is no
                                      longer reachable for release

  Double delete                       Releasing the same allocation more
                                      than once; undefined behavior
  -----------------------------------------------------------------------

A pointer does not automatically become null when the object it pointed
to is destroyed.

## 3. Syntax reference

### Arrays

``` cpp
int arr[5];
int values[4] = {10, 20, 30, 40};

arr[0] = 100;
cout << values[2];
```

### Two-dimensional arrays

``` cpp
int matrix[2][2] = {{1, 2}, {3, 4}};

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        cout << matrix[i][j] << ' ';
    }
    cout << '\\n';
}
```

### Strings

``` cpp
#include <string>

string firstName = "Shubham";
string fullName;
getline(cin, fullName);
```

### Pointers and references

``` cpp
int x = 10;

int* ptr = &x;
int& ref = x;

cout << *ptr << '\\n';
ref = 20;
```

### Dynamic allocation

``` cpp
int* single = new int(10);
delete single;

int* array = new int[5]{1, 2, 3, 4, 5};
delete[] array;
```

## 4. Worked example --- find the largest element in an array

**Problem:** Read `n` integers and print the largest value.

``` cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive.\\n";
        return 0;
    }

    int arr[100];

    if (n > 100) {
        cout << "Maximum supported size is 100.\\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest << '\\n';

    return 0;
}
```

**Sample input**

``` text
5
12 45 7 89 32
```

**Sample output**

``` text
Largest element: 89
```

**Logic:** 1. Read the number of elements. 2. Store the elements in the
array. 3. Assume the first element is the largest. 4. Compare each
remaining element with the current largest. 5. Update the largest value
when a bigger element is found.

Time complexity: `O(n)`\
Auxiliary space: `O(1)` excluding the input array.

## 5. Practice problems --- solve in order

  ------------------------------------------------------------------------
                           No. Problem               Hint
  ---------------------------- --------------------- ---------------------
                             1 Read an array and     Traverse using a
                               print all its         loop.
                               elements.             

                             2 Find the sum and      Maintain a running
                               average of array      sum.
                               elements.             

                             3 Find the minimum and  Maintain two
                               maximum elements.     variables while
                                                     traversing.

                             4 Count even and odd    Check `arr[i] % 2`.
                               elements in an array. 

                             5 Reverse an array in   Swap elements from
                               place.                both ends.

                             6 Search for a given    Compare the target
                               element using linear  with each element.
                               search.               

                             7 Find the              Track the largest and
                               second-largest        second-largest values
                               distinct element.     carefully.

                             8 Add two matrices of   Add corresponding row
                               the same dimensions.  and column positions.

                             9 Find the transpose of Exchange row and
                               a matrix.             column indices.

                            10 Read a full name and  Use `getline` and
                               count its characters. `length()`.

                            11 Write a function that Pass addresses and
                               swaps two integers    dereference the
                               using pointers.       parameters.

                            12 Traverse an array     Start at the first
                               using a pointer       element and advance
                               instead of array      the pointer.
                               indexing.             

                            13 Dynamically allocate  Use `new[]` and
                               an array of `n`       `delete[]`.
                               integers, read        
                               values, find their    
                               sum, and release the  
                               memory.               

                            14 Write a function that Pass the array and
                               returns the sum of an its size separately.
                               array.                

                            15 Demonstrate a         Consider what happens
                               dangling pointer and  to an object's
                               explain why           lifetime after
                               dereferencing it is   deletion. Do not
                               invalid.              dereference the
                                                     invalid pointer.
  ------------------------------------------------------------------------

## 6. Common mistakes to avoid

-   Accessing `arr[n]` when the valid last index is `n - 1`.
-   Assuming a built-in array knows its own size after being passed to a
    function.
-   Using `sizeof(pointer) / sizeof(pointer[0])` as an array-length
    calculation.
-   Dereferencing an uninitialized or null pointer.
-   Returning or retaining a pointer to a local variable after its
    lifetime ends.
-   Using memory after `delete` or `delete[]`.
-   Pairing `new[]` with `delete`, or `new` with `delete[]`.
-   Forgetting to release manually allocated memory.
-   Forgetting that `std::string` requires the `<string>` header.
-   Assuming a pointer is automatically nullified after its target is
    destroyed.

## 7. Self-check

Before moving to Block 4, confirm that you can:

-   [ ] Declare, initialize, and traverse a one-dimensional array.
-   [ ] Explain valid array indices.
-   [ ] Traverse a two-dimensional array with nested loops.
-   [ ] Read and manipulate `std::string`.
-   [ ] Explain address-of (`&`) and dereference (`*`).
-   [ ] Distinguish pointers from references.
-   [ ] Explain null, wild, and dangling pointers.
-   [ ] Allocate and release a dynamic array correctly.
-   [ ] Explain why out-of-bounds access is unsafe.
-   [ ] Solve basic array and pointer problems independently.

## 8. Suggested 35-minute allocation

     Time Activity
  ------- ------------------------------------------------------
    8 min Review arrays, indexing, and strings
    8 min Review pointers, references, and pointer arithmetic
    6 min Review dynamic memory and pointer errors
    8 min Trace the worked example and solve practice problems
    5 min Complete the self-check

**Completion standard:** Move to Block 4 when you can solve basic array
problems, explain pointer dereferencing, distinguish references from
pointers, and correctly manage a dynamic allocation.
