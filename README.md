<div align="center">

# 🚀 DSA in C++ — My Personal Learning Journey

### *From `Hello, World!` to Data Structures & Algorithms — one commit at a time.*

[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Standard](https://img.shields.io/badge/Standard-C%2B%2B17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://en.cppreference.com/)
[![IDE](https://img.shields.io/badge/IDE-VS%20Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white)](https://code.visualstudio.com/)
[![Compiler](https://img.shields.io/badge/Compiler-g%2B%2B%20%7C%20MinGW-4EAA25?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Status](https://img.shields.io/badge/Status-Actively%20Learning-brightgreen?style=for-the-badge)](#-progress-tracker)
[![Files](https://img.shields.io/badge/C%2B%2B%20Files-373-blueviolet?style=for-the-badge)](#-complete-file-index)
[![Chapters](https://img.shields.io/badge/Chapters-16-orange?style=for-the-badge)](#-chapter-overview)
[![PRs Welcome](https://img.shields.io/badge/PRs-Welcome-ff69b4?style=for-the-badge)](#-contributing)
[![Live Site](https://img.shields.io/badge/Live%20Site-GitHub%20Pages-222?style=for-the-badge&logo=githubpages)](https://shubham17290.github.io/CPP_2.1/)

<br/>

> **A clean, well-organized, beginner-friendly repository of C++ programs and practice problems**
> built as part of my personal DSA journey. Every chapter is a folder,
> every file is a concept, every commit is progress. 📈

<br/>

[📖 About](#-about) · [🗂️ Structure](#-repository-structure) · [📊 Chapters](#-chapter-overview) · [🧪 Practice](#-practice-questions-by-chapter) · [🆕 What's New](#-whats-new) · [⚙️ Run](#️-getting-started) · [📚 Index](#-complete-file-index) · [🤝 Contribute](#-contributing)

</div>

---

## 📖 About

This repository is my personal learning journal for **Data Structures & Algorithms in C++**, built by following a structured DSA syllabus. It starts from the absolute basics — variables, data types, operators — and grows chapter by chapter into loops, conditionals, patterns, functions, pointers, arrays, 2D arrays, strings, vectors, and the STL.

Every program is **self-contained**, **compile-ready**, and written to be read by a beginner. The repository is organized like a course: numbered `CH xx` folders mirror the syllabus, and each topic has its own focused examples, practice questions, and assignment solutions.

The goal is simple:

- ✅ **Learn by doing** — every concept is backed by runnable C++ code.
- ✅ **Practice relentlessly** — multiple practice questions and assignment solutions per topic, plus curated **Quality Questions** in every core chapter.
- ✅ **Stay organized** — numbered `CH xx` folders mirror the course syllabus.
- ✅ **Track progress** — git history tells the story of the journey.
- ✅ **Make it browsable** — the whole repo is available as an online code browser with syntax highlighting.

> Whether you're a beginner picking up C++ for the first time or revising fundamentals before
> diving into DSA, this repo is designed to be **readable, runnable, and reusable**.

---

## ✨ Highlights

- 🧩 **373 self-contained C++ programs** — each file compiles and runs independently.
- 📁 **16 syllabus-aligned chapter folders** — `CH 00` through `CH 16`, in the order you should learn them.
- 🧱 **Deep C++ STL coverage** — containers, iterators, and algorithms (`CH 13`, 126 programs), including `binary_search` / `lower_bound` / `upper_bound` / `equal_range`, heap and set algorithms, and the min/max family.
- 🔃 **Sorting algorithms** — bubble (with optimization), selection, insertion, counting, and in-built `sort()` (`CH 12`).
- 🔤 **Strings & character arrays** — C-style strings, `cstring` functions, `std::string`, member functions, anagrams, comparisons, and assignment solutions (`CH 15`).
- 🧮 **2D Arrays** — input/output, traversal, diagonal sums, sorted-matrix search, spiral matrix, matrix pointers, and assignments (`CH 14`).
- 🧪 **Practice + Assignment questions** with full solutions (factorial, Armstrong, prime, Fibonacci, patterns, strings, …).
- ✨ **Quality Questions** subfolder in every core chapter (CH 00–CH 10) with curated, interview-style problems.
- 🧭 **Chapter guides + practice sets** — every chapter now opens with a `README.md` that maps its folders, links solved examples, and adds unsolved challenges.
- 🛠️ **VS Code ready** — `.vscode` config with g++, gdb, and strict warning flags.
- 📝 **Commented code** — intent and logic explained inline.
- 🌐 **Live code browser** — a fully self-contained GitHub Pages site with search and syntax highlighting.
- 🔁 **Git history** — every milestone committed, so you can replay the learning path.

---

## 🗂️ Web Code Browser

Browse the entire codebase online with syntax highlighting and search:

**https://shubham17290.github.io/CPP_2.1/**

The browser includes a chapter index, full-text file search, a README reader, and syntax-highlighted source with line numbers. It is fully self-contained apart from CDN-hosted fonts and highlighting, and it updates automatically on every push.

---

## 📂 Repository Structure

```
CPP_2.1/
│
├── CH 00 Practice/                  # Warm-up programs & operator precedence
├── CH 01 Var and DT/                # Variables, data types, I/O
├── CH 02 Operators/                 # Arithmetic, relational, logical, bitwise
├── CH 03 Conditionals/              # if/else, ternary, switch, calculator project
├── CH 04 Loops/                     # for, while, do-while, digit problems
├── CH 05 Statements/                # break, continue
├── CH 06 Patterns/                  # Star, number, and character patterns
├── CH 07 Function/                  # Functions, scope, overloading, recursion
├── CH 08 Binary Number System/      # Binary/dec conversions, bit tricks
├── CH 09 Pointers/                  # Pointers, references, pass-by semantics
├── CH 10 Array I/                   # Arrays, searching, subarrays, Kadane
├── CH 12 Array II/                  # Sorting algorithms
├── CH 13 STL/                       # Containers, iterators, algorithms
├── CH 14 2D Arrays/                 # Matrices, spiral traversal, pointers
├── CH 15 char array's and strings/  # C-strings, std::string, assignments
├── CH 16 Vectors/                   # Static vs dynamic memory, vector basics
│
├── .github/workflows/pages.yml      # GitHub Pages deployment workflow
├── .vscode/                         # Editor & debugger configuration
├── docs/                            # Self-contained GitHub Pages code browser
├── .gitignore                       # Ignores build artifacts (*.exe, *.out, …)
└── README.md
```

> 📌 **Naming convention:** `CH xx` folders are ordered by the syllabus. Subfolders group
> examples by topic (`01 basics`, `02 member functions`, `03 assignment`, …), and files are
> prefixed with `_01_`, `_02_` to keep lessons in teaching order.
>
> 🧭 **Every chapter folder has a `README.md`** with a folder map, solved examples, and an
> unsolved practice set. Start there when you open a chapter for the first time.

---

## 📊 Chapter Overview

| Chapter | Topic | Programs | Status |
|:--|:--|--:|:--:|
| `CH 00` | [Practice & warm-ups](CH%2000%20Practice/README.md) | 5 | ✅ |
| `CH 01` | [Variables & Data Types](CH%2001%20Var%20and%20DT/README.md) | 18 | ✅ |
| `CH 02` | [Operators](CH%2002%20Operators/README.md) | 20 | ✅ |
| `CH 03` | [Conditionals](CH%2003%20Conditionals/README.md) | 21 | ✅ |
| `CH 04` | [Loops](CH%2004%20Loops/README.md) | 18 | ✅ |
| `CH 05` | [Break & Continue](CH%2005%20Statements/README.md) | 5 | ✅ |
| `CH 06` | [Patterns](CH%2006%20Patterns/README.md) | 16 | ✅ |
| `CH 07` | [Functions](CH%2007%20Function/README.md) | 27 | ✅ |
| `CH 08` | [Binary Number System](CH%2008%20Binary%20Number%20System/README.md) | 5 | ✅ |
| `CH 09` | [Pointers & References](CH%2009%20Pointers/README.md) | 11 | ✅ |
| `CH 10` | [Arrays I](CH%2010%20Array%20I/README.md) | 41 | ✅ |
| `CH 12` | [Arrays II & Sorting](CH%2012%20Array%20II/README.md) | 8 | ✅ |
| `CH 13` | [STL (containers, iterators, algorithms)](CH%2013%20STL/README.md) | 126 | ✅ |
| `CH 14` | [2D Arrays & Matrices](CH%2014%202D%20Arrays/README.md) | 12 | ✅ |
| `CH 15` | [Character Arrays & Strings](CH%2015%20char%20array's%20and%20strings/README.md) | 29 | 🔄 |
| `CH 16` | [Vectors (basics & memory)](CH%2016%20Vectors/README.md) | 1 | 🔄 |
| **Total** | **16 chapters** | **373** | |

> `CH 11` is intentionally skipped to match the original course numbering. Each chapter title above opens its guide.

---

## 🧪 Practice Questions by Chapter

Every chapter folder now starts with a **chapter guide** (`README.md`) that contains:

- 📂 a folder map for the chapter,
- ✅ solved examples linked directly to the code,
- 🧠 an unsolved **Try it yourself** set with hints, and
- ▶️ a ready-to-run compile command.

| Chapter | Practice focus | Chapter guide |
|:--|:--|:--|
| `CH 00` | References, swapping, operator precedence | [Open practice →](CH%2000%20Practice/README.md#-practice-questions) |
| `CH 01` | Types, input/output, ASCII, arithmetic | [Open practice →](CH%2001%20Var%20and%20DT/README.md#-practice-questions) |
| `CH 02` | Bitwise operators, casting, compound assignment | [Open practice →](CH%2002%20Operators/README.md#-practice-questions) |
| `CH 03` | Branching, `switch`, calculator logic | [Open practice →](CH%2003%20Conditionals/README.md#-practice-questions) |
| `CH 04` | Loops, digit problems, series, primes | [Open practice →](CH%2004%20Loops/README.md#-practice-questions) |
| `CH 05` | `break` / `continue`, filtering ranges | [Open practice →](CH%2005%20Statements/README.md#-practice-questions) |
| `CH 06` | Nested-loop patterns and pyramids | [Open practice →](CH%2006%20Patterns/README.md#-practice-questions) |
| `CH 07` | Functions, recursion, overloading | [Open practice →](CH%2007%20Function/README.md#-practice-questions) |
| `CH 08` | Binary conversion and bit tricks | [Open practice →](CH%2008%20Binary%20Number%20System/README.md#-practice-questions) |
| `CH 09` | Pointers, references, pass-by semantics | [Open practice →](CH%2009%20Pointers/README.md#-practice-questions) |
| `CH 10` | Arrays, subarrays, Kadane, two pointers | [Open practice →](CH%2010%20Array%20I/README.md#-practice-questions) |
| `CH 12` | Sorting algorithms and comparators | [Open practice →](CH%2012%20Array%20II/README.md#-practice-questions) |
| `CH 13` | STL containers, iterators, algorithms | [Open practice →](CH%2013%20STL/README.md#-practice-questions) |
| `CH 14` | Matrices, spiral order, transpose | [Open practice →](CH%2014%202D%20Arrays/README.md#-practice-questions) |
| `CH 15` | Strings, anagrams, frequency counts | [Open practice →](CH%2015%20char%20array's%20and%20strings/README.md#-practice-questions) |
| `CH 16` | Memory layout and dynamic storage | [Open practice →](CH%2016%20Vectors/README.md#-practice-questions) |

> The anchor `#-practice-questions` matches the `## 🧪 Practice Questions` heading on GitHub. If your Markdown viewer generates a different slug, the chapter guide is still the first place to look.

---

## 🆕 What's New

- 🧪 **Practice questions in every chapter** — all 16 chapter folders now have a guide with solved examples and an unsolved **Try it yourself** set.
- 🧭 **Sub-level READMEs refreshed** — existing topic READMEs now link back to their chapter guide and include extra practice prompts; missing STL sub-level guides were added.
- 🌐 **GitHub Pages rebuilt** — the code browser now embeds each chapter guide so the practice sets appear inside the chapter view.
- 🧮 **Vectors chapter started (`CH 16`)** — static memory allocation, fixed-size array capacity, and memory addresses, laying the groundwork for `std::vector` and dynamic memory.
- 🔤 **Strings chapter (`CH 15`)** — character arrays, string literals, `strlen`, `strcpy`, `strcat`, `strcmp`, `std::string` input with `getline`, index-based access, range-based `for` loops, and member functions (`length`, `at`, `substr`, `find`).
- 🧠 **String practice** — anagram check, string comparison, vowel counting, and "almost equal" assignment solutions.
- 📄 **Assignment material** — question and answer PDFs plus runnable C++ solutions under `CH 15 → 05 Strings in c++ → 03 assignment`.
- 🗂️ **Reorganized string lessons** into `01 basic ones`, `02 String member functions`, and `03 assignment` for a cleaner learning flow.
- 🧮 **2D Arrays completed (`CH 14`)** — diagonal sum, search in a sorted matrix, spiral matrix, matrix pointers, and assignment solutions.
- 🌐 **Refreshed GitHub Pages site** — the embedded file index and README are regenerated on every push.
- 🧹 **Housekeeping** — compiled `.exe` / `.out` artifacts are ignored and removed from the working tree.

---

## 📊 Progress Tracker

Marked as completed based on the actual content of this repository.

### ✅ Completed

- [x] **Variables & Data Types** — declaration, initialization, I/O
- [x] **Operators** — arithmetic, relational, logical, unary, type casting
- [x] **Conditional Statements** — `if`, `else if`, ternary, `switch`
- [x] **Loops** — `for`, `while`, `do-while`
- [x] **Jump Statements** — `break`, `continue`
- [x] **Prime Numbers** — primality checks
- [x] **Patterns** — star/number/character patterns (`CH 06`)
- [x] **Functions** — parameters, return types, scope, overloading (`CH 07`)
- [x] **Binary Number System** — data types, bin-to-dec, dec-to-bin (`CH 08`)
- [x] **Pointers & References** — addresses, dereferencing, pass-by-value vs pass-by-reference (`CH 09`)
- [x] **Arrays** — declaration, traversal, linear search, reverse, I/O, subarrays, Kadane (`CH 10`)
- [x] **Sorting** — bubble, selection, insertion, counting, in-built `sort()` (`CH 12`)
- [x] **Vectors** — declaration, member functions, static vs dynamic behavior (`CH 13 → 00 vector(APC)`)
- [x] **STL Containers** — vector, list, queue, stack, deque, priority queue, map, set (`CH 13`)
- [x] **STL Iterators** — iterator basics, types, and ranges (`CH 13`)
- [x] **STL Algorithms** — iterating, numeric, searching, min/max, heap, and set algorithms (`CH 13`)
- [x] **2D Arrays** — intro, input/output, diagonal sum, sorted-matrix search, spiral matrix, matrix pointers (`CH 14`)

### 🔄 In Progress

- [ ] **Strings** — core material complete (29 programs); adding more practice and assignment problems (`CH 15`)
- [ ] **Vectors (dedicated chapter)** — static memory allocation, memory locations, and the move toward dynamic storage (`CH 16`)

### 🗺️ Roadmap (Coming Soon)

- [ ] Object-Oriented Programming (classes, inheritance, polymorphism)
- [ ] Recursion & Backtracking
- [ ] Linked Lists
- [ ] Stacks & Queues (implementation from scratch)
- [ ] Trees & Binary Search Trees
- [ ] Heaps & Hashing
- [ ] Graphs (BFS, DFS, shortest paths)
- [ ] Dynamic Programming
- [ ] Greedy Algorithms

> 💡 **Want this to be a template for *your* DSA repo?** Fork it, keep the `CH xx` structure,
> and tick boxes as you go. The folder numbering + per-topic practice pattern scales to any
> DSA syllabus.

---

## ⚙️ Getting Started

### Prerequisites

| Tool | Purpose | Install |
|------|---------|---------|
| **g++** (MinGW on Windows) | Compile C++ | [MinGW-w64](https://www.mingw-w64.org/) / `brew install gcc` |
| **VS Code** (optional) | Editor + debugger | [code.visualstudio.com](https://code.visualstudio.com/) |
| **Git** | Version control | [git-scm.com](https://git-scm.com/) |

Verify your compiler:

```bash
g++ --version
```

### Clone

```bash
git clone https://github.com/shubham17290/CPP_2.1.git
cd "CPP_2.1"
```

---

## ▶️ Running a Program

Each `.cpp` file is **independent**. Compile and run any file like this:

### Linux / macOS

```bash
g++ -std=c++17 -O2 -Wall -Wextra "CH 04 Loops/03 practice questions/_03_sum_of_digits.cpp" -o out
./out
```

### Windows (PowerShell / CMD)

```powershell
g++ -std=c++17 -O2 -Wall -Wextra "CH 04 Loops\03 practice questions\_03_sum_of_digits.cpp" -o out.exe
.\out.exe
```

### Using VS Code (Recommended)

1. Open the folder in VS Code.
2. Install the **C/C++** and **C/C++ Runner** extensions.
3. Open any `.cpp` file and press **`Ctrl + Alt + N`** (Run Code) or use the **Run ▶** button.

> 🧹 **Housekeeping:** compiled `.exe` / `a.out` files are build artifacts and are ignored by git —
> only the `.cpp` sources matter.

---

## 🧭 Coding Conventions

- 📂 One concept per file; file names describe the problem (`_sum_of_digits.cpp`).
- 🧾 `#include <iostream>` + `using namespace std;` for beginner readability.
- 🔢 `int main()` returns `0` on success.
- 💬 Inline comments explain *why*, not *what*.
- 🧪 Every practice question is self-contained with its own `cin`/`cout`.
- ⚠️ Compile with warnings enabled: `-Wall -Wextra -Wpedantic`.
- 🗂️ Numbered prefixes (`_01_`, `_02_`, …) keep files in teaching order.

---

## 📚 Complete File Index

<details>
<summary><b>Click to expand — all 373 C++ source files</b></summary>

<br/>

```
CH 00 Practice/
├── 01 function/
│   ├── _01_pass_by_reference.cpp
│   └── _02_pass_by_reference.cpp
├── 02 operators precedence/
│   └── _01_opr_precednece.cpp
└── Quality Questions/
    ├── _01_swap_without_temp.cpp
    └── _02_operator_precedence_challenge.cpp

CH 01 Var and DT/
├── 01 First code/
│   └── code.cpp
├── 02 Variables and Data Types/
│   ├── code.cpp
│   ├── output.cpp
│   ├── pattern.cpp
│   ├── prepocessor.cpp
│   └── var.cpp
├── 03 Data Types/
│   ├── code.cpp
│   ├── comments.cpp
│   └── float.cpp
├── 04 input and output/
│   ├── argMarks.cpp
│   ├── arth_on_a_b.cpp
│   └── see.cpp
├── 05 assignment Questions/
│   ├── _question_01.cpp
│   ├── _question_02.cpp
│   ├── _question_03.cpp
│   └── _question_04.cpp
└── Quality Questions/
    ├── _01_type_conversion.cpp
    └── _02_ascii_value.cpp

CH 02 Operators/
├── 1 Constants/
│   └── constant.cpp
├── 2 Type Casting/
│   ├── explicit_type_casting.cpp
│   └── typecasting.cpp
├── 3 Predict the output/
│   ├── _question_01.cpp
│   └── _question_02.cpp
├── 4 Operators/
│   ├── 01 Binary operators/
│   │   ├── binary_opr.cpp
│   │   └── unary.cpp
│   └── 02 assignemnt/
│       ├── _logical_operators.cpp
│       ├── assignment.cpp
│       └── relational.cpp
├── 5 Assignment HW/
│   ├── _A_.cpp
│   ├── _B_.cpp
│   └── _C_.cpp
├── 6 Assignment Questions/
│   └── 01 Solutions/
│       ├── _01_factorial.cpp
│       ├── _02_multiplication_table.cpp
│       ├── _03_armstrong_number.cpp
│       ├── _04_prime_number.cpp
│       └── _05_fibonacci.cpp
└── Quality Questions/
    ├── _01_bitwise_operations.cpp
    └── _02_compound_assignment.cpp

CH 03 Conditionals/
├── 01 if else statement/
│   ├── _if_else_c.cpp
│   ├── _practice_q_01_.cpp
│   └── _practice_q_2.cpp
├── 02 else if statement/
│   ├── _else_if_statement.cpp
│   └── _q_01.cpp
├── 03 Ternamry operator/
│   ├── _01_ternary_basics.cpp
│   └── _02_base_2.cpp
├── 04 Switch Statement/
│   └── _01_switch_basics.cpp
├── 05 Project/
│   ├── _cal.cpp
│   └── _calculator.cpp
├── 06 Assignment Questions/
│   ├── Practice session 1/
│   │   ├── _question_01.cpp
│   │   ├── _question_02.cpp
│   │   ├── _question_03.cpp
│   │   ├── _question_04.cpp
│   │   └── _question_05.cpp
│   └── Practice session 2/
│       ├── _01_question_.cpp
│       ├── _02_question_.cpp
│       └── _05_question_.cpp
└── Quality Questions/
    ├── _01_leap_year.cpp
    ├── _02_grade_calculator.cpp
    └── _03_vowel_consonant.cpp

CH 04 Loops/
├── 01 for loops/
│   ├── 00 bsics/
│   │   └── basic.cpp
│   └── 01 practice question/
│       ├── _01_ps_.cpp
│       ├── _02_.cpp
│       └── _03_sum.cpp
├── 02 While Loops/
│   └── _01_while_loop.cpp
├── 03 practice questions/
│   ├── _01_pattern_01.cpp
│   ├── _02_reverse.cpp
│   ├── _03_sum_of_digits.cpp
│   ├── _04_sum_of_odd_digits.cpp
│   ├── _05_reverse_of_a_digit.cpp
│   └── _06_reverse.cpp
├── 04 Do while loop/
│   ├── _01_do_while_loop.cpp
│   └── _02_basics.cpp
├── 05 problems/
│   └── 01 Prime number/
│       ├── _01_practice.cpp
│       └── _02_prime_number_02.cpp
└── Quality Questions/
    ├── _01_fibonacci_series.cpp
    ├── _02_armstrong_number.cpp
    └── _03_gcd_lcm.cpp

CH 05 Statements/
├── 01 Break/
│   ├── _01_break.cpp
│   └── _02_practice.cpp
├── 02 Continue/
│   ├── _01_continue.cpp
│   └── _02_problem.cpp
└── Quality Questions/
    └── _01_prime_in_range.cpp

CH 06 Patterns/
├── 01 Problems/
│   ├── _01_problem_01.cpp
│   ├── _01_problem_genral_approacj.cpp
│   ├── _02_star_Pattern.cpp
│   ├── _03_inverted_star_pattern.cpp
│   ├── _04_half_pyramid_pattern.cpp
│   ├── _05_print_character_pyramid_pattern.cpp
│   ├── _06_hollow_rectangle_pattern.cpp
│   ├── _07_inverted_and_roated_half_pyramid.cpp
│   ├── _08_floyds_triangle.cpp
│   ├── _09_diamond_pattern.cpp
│   └── _10_buttet_fly_pattern.cpp
├── 03 Assignment Solution/
│   ├── _01_0_1_triangle.cpp
│   ├── _02_Rhombus_pattern.cpp
│   └── _03_palindrome_pattern_with_numbers.cpp
└── Quality Questions/
    ├── _01_pascal_triangle.cpp
    └── _02_number_pyramid.cpp

CH 07 Function/
├── 01 Function intro/
│   ├── 01 Basic things/
│   │   ├── _01_function_basic.cpp
│   │   ├── _02_function_basic.cpp
│   │   ├── _03_declaration.cpp
│   │   ├── _04_function_definition.cpp
│   │   ├── _05_forward_declaration.cpp
│   │   ├── _06_function_declaration_and_parameters.cpp
│   │   └── _07_default_argument.cpp
│   ├── 02 Practice Problems/
│   │   ├── _01_problem_01.cpp
│   │   ├── _02_odd_or_even.cpp
│   │   └── _03_factorial.cpp
│   ├── 03 scope/
│   │   ├── _01_local_scope.cpp
│   │   └── _02_global_variable.cpp
│   └── 04 Practice problem/
│       ├── _01_prime_number.cpp
│       ├── _02_print_prime.cpp
│       └── _03_binomial_coefficient.cpp
├── 02 Function Overloading/
│   └── _01_function_overloading.cpp
├── 03 Function assignment/
│   └── 02 Solutions/
│       └── 01 Codes/
│           ├── _01__palindrome.cpp
│           ├── _02_sum_of_digit.cpp
│           ├── _03_square_formula.cpp
│           ├── _04_largest__of_three.cpp
│           └── _05_return_the_next_char.cpp
├── 04 Extra about function/
│   ├── _01_function.cpp
│   ├── _02_practice.cpp
│   ├── _03_pass_by_reference.cpp
│   └── _04_practice.cpp
└── Quality Questions/
    ├── _01_recursive_factorial.cpp
    └── _02_gcd_recursive.cpp

CH 08 Binary Number System/
├── 01 Basics/
│   ├── _01_data_type_modifiers.cpp
│   ├── _02_number_to_binary.cpp
│   └── _03_decimal_to_binary.cpp
└── Quality Questions/
    ├── _01_set_bits_count.cpp
    └── _02_power_of_two.cpp

CH 09 Pointers/
├── 01 Basics/
│   ├── _01_intro.cpp
│   ├── _02_dereference.cpp
│   └── _03_practice.cpp
├── 02 Passing arguments/
│   ├── _01_pass_by_value.cpp
│   ├── _02_pass_by_ref.cpp
│   ├── _03_practice.cpp
│   ├── _04_pratice_q_01.cpp
│   ├── _05_pq_02.cpp
│   └── _06_ref.cpp
└── Quality Questions/
    ├── _01_pointer_arithmetic.cpp
    └── _02_swap_using_pointers.cpp

CH 10 Array I/
├── 01 Basic and extra/
│   ├── _01_array.cpp
│   ├── _02_array_loop.cpp
│   ├── _03_taking_input.cpp
│   ├── _04_smallest_in_array.cpp
│   ├── _05_find_largest_number.cpp
│   ├── _06_pass_by_reference.cpp
│   ├── _07_linear_search.cpp
│   ├── _08_reverse_an_array.cpp
│   └── _09_general_appraoch.cpp
├── 02 Array  01/
│   ├── 01 basic/
│   │   ├── _01_array.cpp
│   │   ├── _02_creationg_of_array_01.cpp
│   │   ├── _03_creationg_of_array_02.cpp
│   │   └── _04_creationg_of_array_03.cpp
│   ├── 02 input and output/
│   │   ├── _01_output.cpp
│   │   └── _02_input_array_value.cpp
│   ├── 03 important problems/
│   │   ├── _01_largest_element_in_array.cpp
│   │   ├── _02_array_passed_by_reference.cpp
│   │   ├── _03_array_pass_by_reference.cpp
│   │   ├── _04_array.cpp
│   │   ├── _05_linear_search.cpp
│   │   ├── _06_reverse_an_array_01.cpp
│   │   ├── _07_reverse_an_array.cpp
│   │   └── _08_binary_search.cpp
│   └── 04 array pointer/
│       ├── _01_array_pointer.cpp
│       ├── _02_increment_and_decrement_opr.cpp
│       ├── _03_pointer_array.cpp
│       ├── _04_traversing_arra_using_pointers.cpp
│       ├── _05_addition.cpp
│       └── _06_boolean_play_with_pointers.cpp
├── 03 Quality Questions/
│   ├── _01_second_largest.cpp
│   ├── _02_rotate_array.cpp
│   └── _03_remove_duplicates.cpp
├── 04 Array 02/
│   ├── _01_print_subarray.cpp
│   ├── _02_max_subarray_sum.cpp
│   ├── _03_max_array_sum_02.cpp
│   ├── _04_kadans_algorithms.cpp
│   ├── _05_buy_and_sell_stocks.cpp
│   └── _06_trapping_water.cpp
└── 05 Assignment/
    └── 02 solution/
        ├── _01_contains_duplicate.cpp
        ├── _02_search_in_rotated_sorted_array.cpp
        └── _03_maximum_product_subarray.cpp

CH 12 Array II/
└── 01 Sorting/
    ├── 01 bubble sort/
    │   ├── _01_bubble_sort.cpp
    │   └── _02_bubble_sort_with_optimization.cpp
    ├── 02 selection sort/
    │   └── _01_insertion_sort.cpp
    ├── 03 insertion sort/
    │   └── _01_insertion_sort.cpp
    ├── 04 Counting sort/
    │   └── _01_countsort.cpp
    ├── 05 in built sort/
    │   ├── _01_inbuilt_sort_ascending.cpp
    │   └── _02_decending_order_sorting.cpp
    └── 06 Practice question/
        └── _01_solution.cpp

CH 13 STL/
├── 00 vector(APC)/
│   ├── 01 basics of the vector/
│   │   ├── _01_vector_syntax.cpp
│   │   └── _02_for_each_loop.cpp
│   ├── 02 Vector Function/
│   │   ├── _01_size.cpp
│   │   ├── _02_push_back.cpp
│   │   ├── _03_pop_back.cpp
│   │   ├── _04_front.cpp
│   │   ├── _05_back.cpp
│   │   └── _06_at.cpp
│   └── 03 Static and dynamic/
│       └── _01_property_01.cpp
├── 01 Containers/
│   ├── 01 vector DS/
│   │   ├── 01 basics/
│   │   │   └── _01_vector_intro.cpp
│   │   ├── 02 member functions in vector/
│   │   │   ├── _01_begin.cpp
│   │   │   ├── _02_insertion.cpp
│   │   │   ├── _03_pop_back.cpp
│   │   │   ├── _04_front_back.cpp
│   │   │   ├── _05_empty.cpp
│   │   │   ├── _06_at_and_index.cpp
│   │   │   ├── _07_capacity_of_vector.cpp
│   │   │   ├── _08_reserve.cpp
│   │   │   ├── _09_clear_function.cpp
│   │   │   ├── _10_insert_function.cpp
│   │   │   ├── _11_swap.cpp
│   │   │   ├── _12_for_each_loop.cpp
│   │   │   └── _13_iterator.cpp
│   │   └── 03 advance of vector/
│   │       ├── _01_2D_vector.cpp
│   │       └── _02_zaged_array.cpp
│   ├── 02 List DS/
│   │   └── 01 basics and functions/
│   │       ├── _01_basics_of_list.cpp
│   │       ├── _02_empty.cpp
│   │       ├── _03_accessing_the_front_and_back.cpp
│   │       ├── _04_traversing.cpp
│   │       ├── _05_deletion_in_list.cpp
│   │       ├── _06_inserting_element_at_the_begening.cpp
│   │       └── _07_insert.cpp
│   ├── 03 Queue DS/
│   │   └── 01 Basics/
│   │       ├── _01_basic_of_queue.cpp
│   │       ├── _02_push_and_pop.cpp
│   │       ├── _03_front_and_back.cpp
│   │       ├── _04_size_and_empty.cpp
│   │       ├── _05_swap.cpp
│   │       ├── _06_emplace.cpp
│   │       └── _07_traversing_queue.cpp
│   ├── 04 Stack DS/
│   │   └── 01 Basics/
│   │       ├── _01_basic_of_stack.cpp
│   │       ├── _02_empty_check.cpp
│   │       └── _03_stack_swap.cpp
│   ├── 05 Deque DS/
│   │   ├── 01 Basics of dequeue/
│   │   │   ├── _01_dequeue_basics.cpp
│   │   │   └── _02_traversing_the_dequeue.cpp
│   │   └── 02 functions on the dequeue/
│   │       ├── _01_erase.cpp
│   │       ├── _02_clear_deque.cpp
│   │       └── _03_swap.cpp
│   ├── 06 priority queue/
│   │   ├── 01 Max heap DS/
│   │   │   ├── 01 bsics of priority queue/
│   │   │   │   └── _01_basic.cpp
│   │   │   └── 02 functions of the priority queue/
│   │   │       ├── _01_push.cpp
│   │   │       ├── _02_pop.cpp
│   │   │       ├── _03_top.cpp
│   │   │       ├── _04_empty.cpp
│   │   │       ├── _05_size.cpp
│   │   │       ├── _06_swap.cpp
│   │   │       └── _07_emplace.cpp
│   │   ├── 02 functions of the priority queue/
│   │   │   ├── _01_push.cpp
│   │   │   ├── _02_pop.cpp
│   │   │   ├── _03_top.cpp
│   │   │   ├── _04_empty.cpp
│   │   │   ├── _05_size.cpp
│   │   │   ├── _06_swap.cpp
│   │   │   └── _07_emplace.cpp
│   │   └── 02 Min heap/
│   │       ├── 01 Basics/
│   │       │   └── _01_min_heap.cpp
│   │       └── 02 functions of the min heap/
│   │           ├── _01_push.cpp
│   │           ├── _02_pop.cpp
│   │           ├── _03_top.cpp
│   │           ├── _04_empty.cpp
│   │           ├── _05_size.cpp
│   │           ├── _06_swap.cpp
│   │           └── _07_emplace.cpp
│   ├── 07 Map/
│   │   ├── 01 UnOrdered Map/
│   │   │   ├── 01 Basics/
│   │   │   │   └── _01_introduction.cpp
│   │   │   └── 02 functions and methods/
│   │   │       ├── _01_at.cpp
│   │   │       ├── _02_updation_in_value.cpp
│   │   │       ├── _03_traversing_the_un_map.cpp
│   │   │       ├── _04_size.cpp
│   │   │       ├── _05_erase.cpp
│   │   │       ├── _06_find.cpp
│   │   │       └── _07_count.cpp
│   │   └── 02 Ordered Map/
│   │       ├── 01 Basics/
│   │       │   └── _01_basic.cpp
│   │       └── 02 functions/
│   │           └── _01_basisc.cpp
│   └── 08 Set/
│       ├── 01 ordered set/
│       │   ├── 01 bsics of set/
│       │   │   └── _01_basic_of_set.cpp
│       │   └── 02 function/
│       │       ├── _01_erase.cpp
│       │       ├── _01_size_clear_empty.cpp
│       │       ├── _03_find.cpp
│       │       ├── _04_count.cpp
│       │       └── _check.cpp
│       └── 02 unord set/
│           ├── 01 bsics of set/
│           │   └── _01_basic_of_set.cpp
│           └── 02 functions/
│               ├── _01_size_clear_empty.cpp
│               ├── _02_erase.cpp
│               └── _03_find.cpp
├── 02 Iterators/
│   ├── 01 basic/
│   │   └── _01_iterator_basics.cpp
│   └── 02 types of iterators/
│       ├── _01_input_iterator.cpp
│       ├── _02_output_iterator.cpp
│       ├── _03_forward_iterator.cpp
│       ├── _04_bidirectional_iterator.cpp
│       └── _05_random_access_iterator.cpp
└── 03 Algorithms/
    ├── 01 iterators and iterating algorithms/
    │   ├── _01_for_each.cpp
    │   ├── _02_find.cpp
    │   ├── _03_find_if.cpp
    │   ├── _04_count.cpp
    │   ├── _05_count_if.cpp
    │   ├── _06_sort.cpp
    │   ├── _07_reverse.cpp
    │   ├── _09_unique.cpp
    │   ├── _10_rotate.cpp
    │   └── _11_partition.cpp
    ├── 02 Numeric algorithms/
    │   ├── _01_numeric_basic.cpp
    │   ├── _02_inner_product.cpp
    │   ├── _03_partial_sum.cpp
    │   └── _04_iota.cpp
    ├── 03 Searching and finding algorithms/
    │   ├── 01 binary search/
    │   │   └── _01_binary_search.cpp
    │   ├── 02 lower bound/
    │   │   └── _01_lower_bound.cpp
    │   ├── 03 upper bound/
    │   │   └── _01_upper_bound.cpp
    │   └── 04 equal range/
    │       └── _01_equal_range.cpp
    ├── 04 min max algorithms/
    │   ├── _01_min.cpp
    │   ├── _02_max.cpp
    │   ├── _03_min_element.cpp
    │   └── _04_max_element.cpp
    ├── 05 Heap Algorithm/
    │   ├── _01_make_heap.cpp
    │   ├── _02_push_heap.cpp
    │   ├── _03_pop_heap.cpp
    │   └── _04_sort_heap.cpp
    └── 06 Set algorithms/
        ├── _01_union.cpp
        ├── _02_intersection.cpp
        ├── _03_difference.cpp
        └── _04_set_symmetric_difference.cpp

CH 14 2D Arrays/
├── 01 intro/
│   └── _01_introduction_to_2d_arrau.cpp
├── 02 input and output/
│   └── _01_input_and_output.cpp
├── 03 problem solving/
│   ├── 00 Spiral Matrix/
│   │   └── _01_basic_of_sprial_matrix.cpp
│   ├── _04_diagonal_sum.cpp
│   └── _05_search_in_sorted_matrix.cpp
├── 04 Matrix pointer/
│   ├── _01_matrix_pointer_intro.cpp
│   └── _02_matrix_pointerpart_02.cpp
└── 05 assignment/
    └── 02 solution/
        ├── _01_solution.cpp
        ├── _02_solution.cpp
        ├── _03_solution.cpp
        ├── _04_solution.cpp
        └── _05_solution.cpp

CH 15 char array's and strings/
├── 01 Basics of the strings/
│   ├── _01_basics.cpp
│   ├── _02_string_data_accessing.cpp
│   └── _03_printing_the_position_of_the_element.cpp
├── 02 Character arrays/
│   ├── _01_char_array.cpp
│   ├── _02_accessing_the_array.cpp
│   ├── _03_string_literal.cpp
│   └── _04_string_length.cpp
├── 03 imp String programs/
│   ├── _01_noraml_input_in_char_array.cpp
│   ├── _02_taking_whole_sentence_input.cpp
│   ├── _03_uppercase_converter_in_string_array.cpp
│   ├── _04_reverse_string.cpp
│   └── _05_checking_a_string_is_it_palindrome_or_not.cpp
├── 04 cstring/
│   ├── _01_strcpy.cpp
│   ├── _02_strcat.cpp
│   └── _03_strcmp.cpp
└── 05 Strings in c++/
    ├── 01 basic ones/
    │   ├── _01_string_input.cpp
    │   ├── _02_string_input.cpp
    │   ├── _03_sting_getline.cpp
    │   ├── _04_string_index_based_accessing.cpp
    │   ├── _05_accessing_string_elements.cpp
    │   └── _06_accessing_the_string_element_using_for_each_loop.cpp
    ├── 02 String member functions/
    │   ├── _01_string_lenght.cpp
    │   ├── _02_dot_at.cpp
    │   ├── _03_sub_string.cpp
    │   ├── _04_find_method.cpp
    │   ├── _05_anagram_check.cpp
    │   └── _06_string_comparision.cpp
    └── 03 assignment/
        └── 03 code/
            ├── _01_vawlCount.cpp
            └── _02_almost_equal.cpp

CH 16 Vectors/
├── 01 1D vector/
│   ├── 01 Basics of the vector/
│   │   └── _01_memory_location.cpp
│   ├── 02 2D array/
│   │   └── _01_2d_array.cpp
│   └── 03 vector/
│       ├── _01_intro_to_vector_ds.cpp
│       ├── _02_vector_size_and_capacity.cpp
│       ├── _03_vector_operation.cpp
│       └── _04_pair_sum.cpp
├── 02 2D vector/
│   └── _01_2d_vector_into.cpp
├── 03 practice questions/
│   └── _01_problem_solving.cpp
└── 04 Assignment/
    ├── 01 questions/
    │   └── Vectors Questions.pdf
    └── 03 coding solution/
        ├── _01_leetcode_ps_645.cpp
        ├── _02_leetcode_ps_11_container_with_most_water.cpp
        └── _03_leetcode_ps_3sum.cpp
```

</details>

---

## 📈 Repository Stats

| Metric | Value |
|:--|--:|
| C++ source files | **373** |
| Chapter folders | **16** |
| Chapter guides (`README.md`) | **16** |
| Sub-level READMEs | **66** |
| STL programs (`CH 13`) | **126** |
| String programs (`CH 15`) | **29** |
| Vector basics programs (`CH 16`) | **11** |
| Array programs (`CH 10` + `CH 12`) | **49** |
| Build artifacts tracked | **0** |

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome!

1. **Fork** the repository.
2. **Create** a feature branch: `git checkout -b feature/new-topic`.
3. **Commit** your changes: `git commit -m "add: topic name"`.
4. **Push** to the branch: `git push origin feature/new-topic`.
5. **Open** a Pull Request.

### Contribution Ideas

- 📌 Add a new DSA topic folder following the `CH xx` numbering convention.
- 🧪 Add more practice problems with edge cases.
- 🐛 Fix bugs or improve existing solutions.
- 📝 Improve comments, naming, or documentation.
- ⚡ Add optimized versions of existing solutions (time/space complexity).

> Please keep code self-contained, well-commented, and compile-clean with `-Wall -Wextra`.

---

## 📚 Recommended Resources

- 📘 [C++ Reference (cppreference)](https://en.cppreference.com/)
- 🧠 [LeetCode](https://leetcode.com/) · [Codeforces](https://codeforces.com/) · [GeeksforGeeks](https://www.geeksforgeeks.org/)
- 🛠️ [Compiler Explorer (Godbolt)](https://godbolt.org/) — see what your C++ compiles to
- 📖 *Competitive Programming 4* by Steven Halim (for the advanced phase)

---

## 👤 Author

**Shubham Mourya** (GitHub: [@shubham17290](https://github.com/shubham17290))

- 📧 Email: `smourya1046@gmail.com`
- 🌱 Currently learning: C++ & Data Structures & Algorithms

> *"The best time to plant a tree was 20 years ago. The second best time is now."*

---

## ⭐ Show Your Support

If this repository helped you learn something new, please consider giving it a **star** ⭐ — it keeps the motivation going and helps others discover it.

<div align="center">

### Happy Coding! 💻✨

*Made with ❤️ and a lot of `cout << "Hello, World!";`*

</div>
