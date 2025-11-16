# LibV Test Suite

This directory contains organized unit tests for the libV library, following 42 norms.

## Structure

```
tests/
├── README.md           # This file
├── tests.h            # Test header with common definitions
├── main.c             # Main test runner
├── test_utils.c       # Test utility functions
├── memory/            # Memory function tests
│   └── test_memory.c
├── strings/           # String function tests
│   └── test_strings.c
├── converts/          # Conversion function tests
│   └── test_converts.c
├── ctype/             # Character type tests
│   └── test_ctype.c
├── lists/             # Linked list tests
│   └── test_lists.c
├── prints/            # Print function tests
│   └── test_prints.c
├── files/             # File operation tests
│   └── test_files.c
└── debug/             # Debug function tests
    └── test_debug.c
```

## Running Tests

To compile and run all tests:
```bash
make test
```

Or using the shorthand:
```bash
make t
```

## Test Organization

Each module has its own test file in a corresponding directory:

- **Memory Tests**: Test memory manipulation functions (memset, memcpy, calloc, etc.)
- **String Tests**: Test string manipulation functions (strlen, strcpy, split, etc.)
- **Convert Tests**: Test conversion functions (atoi, itoa, toupper, tolower)
- **Ctype Tests**: Test character type checking functions (isalpha, isdigit, etc.)
- **List Tests**: Test linked list operations (lstnew, lstadd, lstsize, etc.)
- **Print Tests**: Test output functions (printf, printstr, etc.)
- **File Tests**: Test file operations (isfile, get_next_line, etc.)
- **Debug Tests**: Test debug mode functions

## Adding New Tests

To add a new test:

1. Create a new test function in the appropriate test file
2. Follow the pattern: `static int test_function_name(void)`
3. Return `TEST_PASS` or `TEST_FAIL`
4. Call the test from the module's main test function
5. Ensure code follows 42 norms (run `norminette`)

## 42 Norms Compliance

All test files follow the 42 School coding standards:
- 80 characters per line maximum
- 25 lines per function maximum
- Proper header comments
- Snake_case naming convention
- No more than 5 functions per file

Validate with:
```bash
norminette tests/
```
