# C++ Revision --- Block 1: Fundamentals

**Revision time:** 25 minutes\
**Coverage:** C++ program structure, variables, data types, operators,
and input/output.

------------------------------------------------------------------------

## 1. Learning objectives

By the end of this block, you should be able to:

-   Explain the basic structure of a C++ program.
-   Declare and initialize variables correctly.
-   Choose suitable built-in data types.
-   Use arithmetic, relational, logical, and assignment operators.
-   Read input with `cin` and display output with `cout`.
-   Identify basic type-conversion behavior.

## 2. Important theory --- quick notes

### 2.1 Basic C++ program structure

``` cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!";
    return 0;
}
```

  -----------------------------------------------------------------------
  Part                                Purpose
  ----------------------------------- -----------------------------------
  `#include <iostream>`               Makes standard input/output stream
                                      facilities available.

  `using namespace std;`              Allows standard-library names such
                                      as `cout` to be used without
                                      writing `std::` each time.

  `int main()`                        Defines the program's entry-point
                                      function in a hosted C++ program.

  `{ }`                               Delimit a block of code.

  `return 0;`                         Indicates successful termination to
                                      the execution environment.
  -----------------------------------------------------------------------

### 2.2 Variables

A variable is a named object whose value can be used and, when
permitted, changed during program execution.

``` cpp
int age = 21;
double price = 99.5;
char grade = 'A';
```

-   **Declaration:** introduces a variable and its type.
-   **Initialization:** gives the variable its initial value.
-   **Assignment:** stores a value in an already-declared variable.

``` cpp
int score;       // declaration
score = 90;      // assignment
int marks = 95;  // declaration and initialization
```

### 2.3 Fundamental data types

  ------------------------------------------------------------------------
  Type                    Typical use             Example
  ----------------------- ----------------------- ------------------------
  `int`                   Whole numbers           `int count = 10;`

  `float`                 Single-precision        `float rate = 2.5f;`
                          floating-point values   

  `double`                Double-precision        `double pi = 3.14159;`
                          floating-point values   

  `char`                  A character             `char ch = 'A';`

  `bool`                  Boolean value           `bool active = true;`

  `void`                  No value / no return    `void display();`
                          type                    
  ------------------------------------------------------------------------

Exact type sizes are implementation-dependent. Use `sizeof(type)` to
inspect a type's size on your compiler.

### 2.4 Constants

Use `const` when a value should not be changed after initialization.

``` cpp
const double PI = 3.14159;
```

### 2.5 Operators

  Category              Operators            Purpose
  --------------------- -------------------- ------------------------------
  Arithmetic            `+ - * / %`          Mathematical operations
  Relational            `== != < > <= >=`    Compare values
  Logical               `&& || !`            Combine or invert conditions
  Assignment            `= += -= *= /= %=`   Assign or update values
  Increment/decrement   `++ --`              Increase or decrease by one

Important reminders:

-   Integer division discards the fractional part: `7 / 2` produces `3`.
-   Floating-point division: `7.0 / 2` produces `3.5`.
-   `%` is the remainder operator and is used with integral operands.
-   `=` assigns; `==` compares.
-   `++x` increments before its value is used in the expression; `x++`
    yields the old value before incrementing.

### 2.6 Input and output

``` cpp
int age;
cin >> age;
cout << "Age: " << age << '\\n';
```

-   `cin >> variable` reads formatted input.
-   `cout << value` writes output.
-   `\\n` inserts a newline.
-   `endl` inserts a newline and flushes the output stream.

For a line of text containing spaces, use `getline(cin, text)`.

## 3. Syntax reference

``` cpp
// Variable declaration and initialization
int number = 10;
double decimal = 4.5;
char letter = 'B';
bool passed = true;

// Multiple input values
int a, b;
cin >> a >> b;

// Multiple output values
cout << "a = " << a << ", b = " << b << '\\n';

// Constant
const int DAYS_IN_WEEK = 7;

// Type conversion
double result = static_cast<double>(7) / 2;
```

Prefer `static_cast` for explicit, readable conversions in ordinary C++
code.

## 4. Worked example --- basic calculator

**Problem:** Read two integers and print their sum, difference, product,
and quotient.

``` cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Sum: " << a + b << '\\n';
    cout << "Difference: " << a - b << '\\n';
    cout << "Product: " << a * b << '\\n';

    if (b != 0) {
        cout << "Integer quotient: " << a / b << '\\n';
    } else {
        cout << "Quotient: undefined (division by zero)\\n";
    }

    return 0;
}
```

**Sample input**

``` text
17 5
```

**Sample output**

``` text
Sum: 22
Difference: 12
Product: 85
Integer quotient: 3
```

Notice that `17 / 5` is integer division because both operands are
integers.

## 5. Practice problems --- solve in order

Do not look up solutions before attempting each problem. Write, compile,
run, and test your code.

  ------------------------------------------------------------------------
                           No. Problem               Hint
  ---------------------------- --------------------- ---------------------
                             1 Print your name, age, Use multiple `cout`
                               and college on        statements.
                               separate lines.       

                             2 Read three integers   Read all three with
                               and print their sum.  `cin`.

                             3 Read two numbers and  Use arithmetic
                               print sum,            operators.
                               difference, and       
                               product.              

                             4 Read length and       Area = length ×
                               breadth; calculate    breadth; perimeter =
                               rectangle area and    2 × (length +
                               perimeter.            breadth).

                             5 Read a character and  Convert the `char` to
                               print its integer     `int`.
                               character-code value. 

                             6 Read Celsius          Fahrenheit = (Celsius
                               temperature and       × 9 / 5) + 32. Use
                               convert it to         floating-point
                               Fahrenheit.           arithmetic.

                             7 Read an integer and   Consider the
                               print its last digit. remainder operator.

                             8 Read two integers and Use a third variable.
                               swap them using a     
                               temporary variable.   

                             9 Read total seconds    Use integer division
                               and convert them into and remainder.
                               hours, minutes, and   
                               seconds.              

                            10 Read a number and     Use multiplication;
                               print its square and  consider the chosen
                               cube.                 data type.
  ------------------------------------------------------------------------

## 6. Self-check

Before moving to the next block, confirm that you can:

-   [ ] Write a valid C++ program from memory.
-   [ ] Explain declaration, initialization, and assignment.
-   [ ] Select an appropriate built-in data type.
-   [ ] Distinguish `=` from `==`.
-   [ ] Predict integer-division results.
-   [ ] Use `cin`, `cout`, `\\n`, and `getline`.
-   [ ] Solve the practice problems without copying a solution.

## 7. Suggested 25-minute allocation

     Time Activity
  ------- -------------------------------------------
    5 min Review theory and data types
    5 min Recall syntax and operators
    5 min Understand and rewrite the worked example
    8 min Solve practice problems
    2 min Complete the self-check

**Completion standard:** Move to Block 2 when you can write the worked
example independently and solve the basic practice problems with correct
input, output, and data types.
