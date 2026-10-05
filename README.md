# C Programming Practice Repository

A structured collection of C programming exercises organized by topic, progressing from basics to advanced concepts. Designed for self-paced learning alongside video tutorials and textbook study.

## Repository Structure

```
C-Programming/
├── 1. Intro/                    # Basic syntax, Hello World, variables
├── 2. Operators/                # Arithmetic, relational, logical, bitwise
├── 3. Conditions/               # if, else-if, switch, ternary operator
├── 4. Operator & Conditionals/  # Combined practice problems
├── 5.1 Loops - Level 1/         # for, while, do-while basics
├── 5.2 Loops - Level 2/         # Nested loops, pattern problems
├── 6. Nested Loops/             # Pattern printing (pyramids, diamonds, alphabets)
│   ├── Half Pyramid/
│   ├── Pyramid/
│   ├── Reverse Pyramid/
│   ├── Diamond/
│   └── nested-loop-patterns/
├── 7. Array/                    # 1D arrays, searching, sorting
├── 8. 2D Array/                 # Matrices, multi-dimensional arrays
├── 9. String/                   # String manipulation, library functions
├── 10. Function/                # Functions, recursion, scope, storage classes
├── 11. Pointer/                 # Pointers, pointer arithmetic, dynamic memory
├── 12. Structure/               # Structs, arrays of structs, sorting
├── 13. File/                    # File I/O operations
├── Books for C/                 # Reference textbooks (PDF)
├── Some Assignments/            # Graded assignments with test cases
└── Testing and Understanding IO operations/
```

Each topic folder contains:
- **Numbered `.c` files** — individual practice problems
- **`problemset-*.pdf`** — original problem statements (where available)

## Quick Start

### Prerequisites
- A C compiler (GCC recommended): `gcc --version`
- Optional: Make for build automation

### Compile and Run
```bash
# Single file
gcc "1. Intro/1.c" -o intro1 && ./intro1

# With warnings (recommended)
gcc -Wall -Wextra -std=c11 "10. Function/5.c" -o func5 && ./func5
```

### Build All (Windows PowerShell)
```powershell
Get-ChildItem -Recurse -Filter "*.c" | ForEach-Object {
    $out = $_.FullName.Replace(".c", ".exe")
    gcc -Wall -Wextra -std=c11 $_.FullName -o $out 2>$null
    if ($LASTEXITCODE -eq 0) { "Built: $out" }
}
```

## Learning Path

| Order | Topic | Folder | Key Concepts |
|-------|-------|--------|--------------|
| 1 | Introduction | `1. Intro` | Program structure, `printf`/`scanf`, data types |
| 2 | Operators | `2. Operators` | Arithmetic, precedence, type conversion |
| 3 | Conditionals | `3. Conditions`, `4. Operator & Conditionals` | Branching, logical expressions |
| 4 | Loops | `5.1 Loops - Level 1`, `5.2 Loops - Level 2` | Iteration, loop control |
| 5 | Nested Loops | `6. Nested Loops` | Patterns, 2D iteration logic |
| 6 | Arrays | `7. Array`, `8. 2D Array` | Collections, matrices, algorithms |
| 7 | Strings | `9. String` | Char arrays, `<string.h>` functions |
| 8 | Functions | `10. Function` | Modularity, recursion, headers |
| 9 | Pointers | `11. Pointer` | Memory addresses, dynamic allocation |
| 10 | Structures | `12. Structure` | Custom types, data modeling |
| 11 | File I/O | `13. File` | Persistence, streams, error handling |

## Reference Materials

| Resource | Description |
|----------|-------------|
| **E. Balagurusamy — Programming in ANSI C (2016)** | Primary textbook, comprehensive coverage |
| **C Notes for Professionals** | Quick reference, compiled from Stack Overflow |
| **Teach Yourself C** | Self-study guide |
| **Tamim Shariar — Bangla C Programming** | Bengali language reference |

Video companion: [Anisul Islam's C Programming Tutorial](https://youtube.com/playlist?list=PLgH5QX0i9K3pCMBZcul1fta6UivHDbXvz)

## Assignments

Two graded assignments in `Some Assignments/`:

- **Assignment 1** — Basic I/O, operators, conditionals, loops
- **Assignment 2** — Arrays, functions, file handling

Each includes:
- `Problem.pdf` — Requirements
- `Solution.c` — Reference implementation
- `Sample input/` / `Sample output/` — Test cases for verification

## Coding Standards

This repository follows **C11** with these conventions:

```c
// Compile flags used: -Wall -Wextra -std=c11 -pedantic
// Indentation: 4 spaces (no tabs)
// Braces: K&R style (opening brace on same line)
// Naming: snake_case for variables/functions, UPPER_SNAKE for macros
// Main returns int, explicit return 0
```

Example:
```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int find_max(const int arr[], size_t n) {
    int max = arr[0];
    for (size_t i = 1; i < n; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main(void) {
    int data[] = {3, 7, 2, 9, 1};
    printf("Max: %d\n", find_max(data, 5));
    return 0;
}
```

## Why C in 2026?

- **Foundation**: Underpins OS kernels, embedded systems, databases, language runtimes
- **No magic**: Manual memory management teaches how computers actually work
- **Portability**: Runs on virtually every architecture
- **Performance**: Zero-cost abstractions, predictable execution
- **Career**: Systems, firmware, game engines, HPC, security research

## Contributing

1. Follow the existing folder/naming convention
2. Include a problem statement (PDF or comment header)
3. Compile cleanly with `-Wall -Wextra -std=c11`
4. One problem per file, numbered sequentially