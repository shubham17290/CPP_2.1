# CH 15 — Character Arrays & Strings

Work with C-style character arrays and `std::string`: input, traversal, `cstring` functions, member functions, anagrams, comparisons, and assignment solutions.

> **Part of the [DSA in C++ learning journal](../README.md).**

## 📂 Folder map

| Folder | What you'll find |
|:--|:--|
| [`01 Basics of the strings/`](01%20Basics%20of%20the%20strings/) | String basics and element access. |
| [`02 Character arrays/`](02%20Character%20arrays/) | C-style arrays, string literals, and length. |
| [`03 imp String programs/`](03%20imp%20String%20programs/) | Input, uppercase conversion, reverse, and palindrome checks. |
| [`04 cstring/`](04%20cstring/) | `strcpy`, `strcat`, and `strcmp`. |
| [`05 Strings in c++/`](05%20Strings%20in%20c%2B%2B/) | `std::string` input, member functions, and assignment solutions. |

## 🧪 Practice Questions

### ✅ Solved examples

| # | Question | Solution |
|--:|:--|:--|
| 1 | Convert a character array to uppercase. | [`_03_uppercase_converter_in_string_array.cpp`](03%20imp%20String%20programs/_03_uppercase_converter_in_string_array.cpp) |
| 2 | Reverse a string. | [`_04_reverse_string.cpp`](03%20imp%20String%20programs/_04_reverse_string.cpp) |
| 3 | Check whether a string is a palindrome. | [`_05_checking_a_string_is_it_palindrome_or_not.cpp`](03%20imp%20String%20programs/_05_checking_a_string_is_it_palindrome_or_not.cpp) |
| 4 | Check whether two strings are anagrams. | [`_05_anagram_check.cpp`](05%20Strings%20in%20c%2B%2B/02%20String%20member%20functions/_05_anagram_check.cpp) |
| 5 | Compare two strings. | [`_06_string_comparision.cpp`](05%20Strings%20in%20c%2B%2B/02%20String%20member%20functions/_06_string_comparision.cpp) |
| 6 | Count vowels in a string. | [`_01_vawlCount.cpp`](05%20Strings%20in%20c%2B%2B/03%20assignment/03%20code/_01_vawlCount.cpp) |
| 7 | Check whether two strings are almost equal. | [`_02_almost_equal.cpp`](05%20Strings%20in%20c%2B%2B/03%20assignment/03%20code/_02_almost_equal.cpp) |

### 🧠 Try it yourself

| # | Challenge | Hint |
|--:|:--|:--|
| 1 | Count the words in a sentence. | Split on spaces and handle repeated spaces. |
| 2 | Remove all spaces from a string. | Build a new string or compact in place. |
| 3 | Toggle the case of every character. | ASCII range checks. |
| 4 | Print the frequency of every character. | A 26-element array or a map. |
| 5 | Count occurrences of a substring. | Repeated `find` or a sliding window. |
| 6 | Validate a palindrome while ignoring non-alphanumeric characters. | Two pointers, skip punctuation. |

> Start with the hints, then compare your solution with the solved examples above. There is no single correct implementation.

## ▶️ Run a program

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 15 char array's and strings/05 Strings in c++/02 String member functions/_05_anagram_check.cpp" -o out
./out
```

## 🧭 Navigation

[← Main README](../README.md) · [← Previous: CH 14 2D Arrays](../CH%2014%202D%20Arrays/README.md) · [Next: CH 16 Vectors →](../CH%2016%20Vectors/README.md)
