# CH 17 — Bit Manipulation

Work directly with the binary representation of numbers: bitwise operators, shifts, and the classic bit tricks that show up in interviews.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Bitwise operators/`](01%20Bitwise%20operators/) | Bitwise AND, OR, XOR, and NOT with worked examples. |
| [`02 Shift operators/`](02%20Shift%20operators/) | Left shift and right shift. |
| [`03 practice question/`](03%20practice%20question/) | Even/odd, i-th bit operations, power-of-two, and set-bit counting. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Compute the bitwise AND of two numbers (`10 & 15`). | [`_01_logical_and_operator.cpp`](01%20Bitwise%20operators/_01_logical_and_operator.cpp) |
| 2 | Compute the bitwise OR of two numbers (`10 \| 15`). | [`_02_logical_or_operator.cpp`](01%20Bitwise%20operators/_02_logical_or_operator.cpp) |
| 3 | Compute the bitwise XOR of two numbers (`10 ^ 15`). | [`_03_logical_xor_operator.cpp`](01%20Bitwise%20operators/_03_logical_xor_operator.cpp) |
| 4 | Apply bitwise NOT to a number (`~10`). | [`_04_not_operator.cpp`](01%20Bitwise%20operators/_04_not_operator.cpp) |
| 5 | Left shift a number by two positions (`7 << 2`). | [`_01_left_shift.cpp`](02%20Shift%20operators/_01_left_shift.cpp) |
| 6 | Right shift a number by two positions (`7 >> 2`). | [`_02_right_shift.cpp`](02%20Shift%20operators/_02_right_shift.cpp) |
| 7 | Evaluate `~4` as a bitwise NOT warm-up. | [`_01_practice_question_01.cpp`](03%20practice%20question/_01_practice_question_01.cpp) |
| 8 | Evaluate `8 >> 1` as a right-shift warm-up. | [`_02_practice_question_02_.cpp`](03%20practice%20question/_02_practice_question_02_.cpp) |
| 9 | Check whether a number is even or odd with `n & 1`. | [`_03_even_and_odd_number_check.cpp`](03%20practice%20question/_03_even_and_odd_number_check.cpp) |
| 10 | Get the `i`-th bit of a number using a left-shifted bitmask. | [`_04_get_ith_bit.cpp`](03%20practice%20question/_04_get_ith_bit.cpp) |
| 11 | Set the `i`-th bit with `n \| (1 << i)`. | [`_05_set_ith_bit.cpp`](03%20practice%20question/_05_set_ith_bit.cpp) |
| 12 | Clear the `i`-th bit with `n & ~(1 << i)`. | [`_06_clear_ith_bit.cpp`](03%20practice%20question/_06_clear_ith_bit.cpp) |
| 13 | Check whether a number is a power of two with `n & (n - 1)`. | [`_07_check_for_power_of_2.cpp`](03%20practice%20question/_07_check_for_power_of_2.cpp) |
| 14 | Clear all bits from the LSB through index `i` with `(~0) << i`. | [`_08_waf_to_clear_it_bit_of_a_number.cpp`](03%20practice%20question/_08_waf_to_clear_it_bit_of_a_number.cpp) |
| 15 | Count the set bits in a number by shifting through its bits. | [`_09_count_set_bit.cpp`](03%20practice%20question/_09_count_set_bit.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Toggle the `i`-th bit of a number. | XOR with a left-shifted `1`. |
| 2 | Clear the lowest set bit of a number. | `n & (n - 1)` removes it. |
| 3 | Count set bits with Brian Kernighan's algorithm. | Keep clearing the lowest set bit until the number reaches zero. |
| 4 | Swap two numbers without a temporary variable. | Build the swap from three XOR operations. |
| 5 | Find the only number that appears once when every other number appears twice. | XOR everything; pairs cancel out. |
| 6 | Check whether the `i`-th bit is set without branching. | Shift the bit down and mask with `1`. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 17 Bit Manipulation/03 practice question/_09_count_set_bit.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 16 Vectors](../CH%2016%20Vectors/README.md)
