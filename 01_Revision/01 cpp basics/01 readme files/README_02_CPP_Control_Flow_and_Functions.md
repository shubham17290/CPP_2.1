# C++ Revision --- Block 2: Control Flow & Functions

**Revision time:** 25 minutes\
**Coverage:** Conditional statements, loops, jump statements, functions,
parameter passing, scope, and recursion.

------------------------------------------------------------------------

## 1. Learning objectives

By the end of this block, you should be able to:

-   Choose between `if`, `else if`, `else`, and `switch`.
-   Use `for`, `while`, and `do-while` loops.
-   Control loop execution with `break` and `continue`.
-   Declare, define, call, and return values from functions.
-   Understand parameters, arguments, pass-by-value, and
    pass-by-reference.
-   Recognize recursion and identify its base case.

## 2. Important theory --- quick notes

### 2.1 Conditional statements

Conditional statements select which code executes based on a Boolean
condition.

  -----------------------------------------------------------------------
  Statement                           Use
  ----------------------------------- -----------------------------------
  `if`                                Execute a block when a condition is
                                      true.

  `if-else`                           Choose between two paths.

  `else if`                           Check multiple conditions in
                                      sequence.

  `switch`                            Select among matching integral or
                                      enumeration case values.
  -----------------------------------------------------------------------

Remember: - Conditions in `if` are evaluated as Boolean contexts. - In a
`switch`, `case` labels must be constant expressions of an appropriate
integral or enumeration type. - Use `break` in a `switch` when you do
not want execution to fall through to the next case.

### 2.2 Loops

Loops repeat a block of code.

  -----------------------------------------------------------------------
  Loop                                Best fit
  ----------------------------------- -----------------------------------
  `for`                               When initialization, condition, and
                                      update naturally fit together;
                                      often used when the iteration count
                                      is known.

  `while`                             When repetition depends on a
                                      condition and the count may not be
                                      known in advance.

  `do-while`                          When the body must execute at least
                                      once.
  -----------------------------------------------------------------------

A `do-while` statement ends with a semicolon.

### 2.3 Jump statements

-   `break`: exits the nearest enclosing loop or `switch`.
-   `continue`: skips the rest of the current loop iteration and
    proceeds to the next iteration.
-   `return`: exits the current function, optionally returning a value.

### 2.4 Functions

A function is a reusable named block of code that can receive inputs and
optionally return a result.

Main parts: - **Declaration / prototype:** tells the compiler the
function's name, return type, and parameter types. - **Definition:**
contains the function body. - **Call:** invokes the function.

``` cpp
int add(int a, int b);       // declaration

int add(int a, int b) {      // definition
    return a + b;
}

int result = add(4, 5);      // call
```

### 2.5 Parameters and arguments

-   **Parameters** are variables listed in a function declaration or
    definition.
-   **Arguments** are values or expressions supplied in a function call.

### 2.6 Pass-by-value and pass-by-reference

**Pass-by-value:** the function receives its own parameter value.
Changing that parameter does not change the caller's original variable.

``` cpp
void update(int x) {
    x = 100;
}
```

**Pass-by-reference:** the parameter refers to the caller's variable.
Changes through that reference affect the original variable.

``` cpp
void update(int& x) {
    x = 100;
}
```

Use `const T&` when a function should read a potentially large object
without copying it and should not modify it through that parameter.

### 2.7 Scope and lifetime --- essentials

-   A local variable declared inside a block is generally accessible
    only within that block.
-   A parameter is local to its function.
-   A variable declared at namespace scope has namespace scope.
-   Scope describes where a name can be used; lifetime describes how
    long an object exists.

### 2.8 Recursion

Recursion occurs when a function calls itself, directly or indirectly.

Every correctly designed recursive solution needs: 1. **Base case:**
stops further recursive calls. 2. **Progress toward the base case:**
each recursive call should make the problem smaller or otherwise move
toward termination. 3. **Recursive case:** handles the remaining
problem.

Without a reachable base case, recursion may continue until resources
are exhausted.

## 3. Syntax reference

### Conditions

``` cpp
if (condition) {
    // statements
} else if (anotherCondition) {
    // statements
} else {
    // fallback
}
```

### Switch

``` cpp
switch (choice) {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    default:
        cout << "Other";
}
```

### Loops

``` cpp
for (int i = 0; i < 5; i++) {
    cout << i << '\\n';
}

int i = 0;
while (i < 5) {
    cout << i << '\\n';
    i++;
}

int j = 0;
do {
    cout << j << '\\n';
    j++;
} while (j < 5);
```

### Functions

``` cpp
// Declaration
int square(int number);

// Definition
int square(int number) {
    return number * number;
}

// Call
int answer = square(6);
```

### Reference parameter

``` cpp
void increment(int& value) {
    value++;
}
```

### Recursion

``` cpp
int factorial(int n) {
    if (n <= 1) {        // base case
        return 1;
    }

    return n * factorial(n - 1);
}
```

## 4. Worked example --- menu-based calculator

**Problem:** Read two numbers and an operation choice. Use a function to
perform the selected operation.

``` cpp
#include <iostream>
using namespace std;

double calculate(double a, double b, char operation) {
    switch (operation) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            }
            cout << "Division by zero is not allowed.\\n";
            return 0;
        default:
            cout << "Invalid operation.\\n";
            return 0;
    }
}

int main() {
    double a, b;
    char operation;

    cout << "Enter: number operator number\\n";
    cin >> a >> operation >> b;

    double result = calculate(a, b, operation);
    cout << "Result: " << result << '\\n';

    return 0;
}
```

**Sample input**

``` text
12 * 4
```

**Sample output**

``` text
Result: 48
```

The `calculate` function receives two values and an operator, selects
the operation with `switch`, and returns the result.

## 5. Practice problems --- solve in order

Write and run a separate program for each problem unless the problem
asks you to build on an earlier one.

  --------------------------------------------------------------------------
                           No. Problem               Hint
  ---------------------------- --------------------- -----------------------
                             1 Read an integer and   Use an
                               print whether it is   `if / else if / else`
                               positive, negative,   chain.
                               or zero.              

                             2 Read a year and       Check divisibility by
                               determine whether it  400, or by 4 but not
                               is a leap year.       100.

                             3 Read a number from 1  Use `switch` and
                               to 7 and print the    `default`.
                               corresponding         
                               weekday.              

                             4 Print numbers from 1  Use a `for` loop.
                               to N.                 

                             5 Find the sum of the   Maintain a running
                               first N natural       total.
                               numbers using a loop. 

                             6 Reverse the digits of Repeatedly use `% 10`
                               a positive integer.   and `/ 10`.

                             7 Print a               Loop over the required
                               multiplication table  multipliers.
                               for a given number.   

                             8 Write a function that Compare the parameters
                               returns the maximum   and return one.
                               of two integers.      

                             9 Write a function that Test divisors up to the
                               checks whether a      square root; handle
                               number is prime.      values below 2.

                            10 Write a function that Use `int&` parameters
                               swaps two integers    and a temporary
                               using reference       variable.
                               parameters.           

                            11 Calculate factorial   Recursive case reduces
                               using both an         `n`; define the result
                               iterative function    for 0.
                               and a recursive       
                               function.             

                            12 Find the greatest     Use the Euclidean
                               common divisor (GCD)  algorithm: replace
                               of two non-negative   `(a, b)` with
                               integers using        `(b, a % b)`.
                               recursion or          
                               iteration.            
  --------------------------------------------------------------------------

## 6. Common mistakes to avoid

-   Writing `=` instead of `==` in a comparison.
-   Forgetting to update the loop variable, causing an unintended
    infinite loop.
-   Adding an unnecessary semicolon after `if`, `for`, or `while`.
-   Forgetting the semicolon after the `do-while` condition.
-   Forgetting `break` in a `switch` when fall-through is not intended.
-   Returning no value from a non-`void` function on a path that reaches
    the end.
-   Expecting pass-by-value to modify the caller's variable.
-   Writing recursion without a valid base case or progress toward it.

## 7. Self-check

Before moving to Block 3, confirm that you can:

-   [ ] Select the appropriate conditional statement.
-   [ ] Explain when to use each of the three loop forms.
-   [ ] Trace a loop and predict its output.
-   [ ] Explain `break`, `continue`, and `return`.
-   [ ] Write a function declaration, definition, and call.
-   [ ] Distinguish parameters from arguments.
-   [ ] Explain pass-by-value versus pass-by-reference.
-   [ ] Identify the base case and recursive case in a function.
-   [ ] Solve the basic practice problems independently.

## 8. Suggested 25-minute allocation

     Time Activity
  ------- --------------------------------------------
    5 min Review conditions and loops
    5 min Recall jump statements and function syntax
    5 min Study and trace the worked example
    8 min Solve selected practice problems
    2 min Complete the self-check

**Completion standard:** Move to Block 3 when you can trace loops, write
a small function independently, and explain the difference between
pass-by-value and pass-by-reference.
