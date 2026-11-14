# CH 08 — Binary Number System

See how integers are stored in binary, convert between decimal and binary, and use bit tricks to inspect or change individual bits.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Basics/`](01%20Basics/) | Data-type modifiers, number-to-binary, and decimal-to-binary examples. |
| [`Quality Questions/`](Quality%20Questions/) | Set-bit counting and power-of-two checks. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Count the set bits with Brian Kernighan's algorithm. | [`_01_set_bits_count.cpp`](Quality%20Questions/_01_set_bits_count.cpp) |
| 2 | Check whether a number is a power of two. | [`_02_power_of_two.cpp`](Quality%20Questions/_02_power_of_two.cpp) |
| 3 | Convert a decimal number to binary with a loop. | [`_03_decimal_to_binary.cpp`](01%20Basics/_03_decimal_to_binary.cpp) |
| 4 | Explore signed/unsigned and data-type modifiers. | [`_01_data_type_modifiers.cpp`](01%20Basics/_01_data_type_modifiers.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Convert decimal to binary without `bitset`. | Repeatedly divide by 2 and collect remainders. |
| 2 | Count the zero bits in a 32-bit integer. | Inspect every bit with a mask. |
| 3 | Reverse the bits of a 32-bit unsigned integer. | Shift the result left and read the input right. |
| 4 | Check whether the i-th bit is set. | `(n >> i) & 1`. |
| 5 | Swap two numbers with XOR. | No temporary variable. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 08 Binary Number System/Quality Questions/_01_set_bits_count.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 07 Functions](../CH%2007%20Function/README.md) · [Next: CH 09 Pointers →](../CH%2009%20Pointers/README.md)
