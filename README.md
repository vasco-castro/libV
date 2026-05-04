*This project has been created as part of the 42 curriculum by vsoares-.*

# libV

A personal, modular, and extended version of `libft`, built to centralize commonly used C utilities for 42 projects and general C development.

---

## Description

`libV` is a static C library (`libft.a`) that groups reimplemented standard-like utilities and additional helper functions into a reusable toolkit.

### Project goal

The objective is to provide a reliable foundation for future projects by:
- Rebuilding core libc-style behavior to strengthen low-level C knowledge
- Offering consistent APIs across projects
- Reducing duplicated code
- Keeping functions organized by domain for readability and maintenance

### Codebase overview

The project is structured by modules, with headers in `includes/` and implementations in `srcs/`:

- `srcs/converts/` — numeric/character conversion helpers
  Header: `includes/converts.h`
  Examples: `ft_atoi`, `ft_atol`, `ft_itoa`, `ft_tolower`, `ft_toupper`
- `srcs/ft_ctype/` — character classification and checks
  Header: `includes/ft_ctype.h`
  Examples: `ft_isalpha`, `ft_isdigit`, `ft_isspace`, `ft_isxdigit`, `ft_issign`
- `srcs/ft_memory/` — memory operations
  Header: `includes/ft_memory.h`
  Examples: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_calloc`
- `srcs/ft_string/` — string and token utilities
  Header: `includes/ft_string.h`
  Examples: `ft_strlen`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_split`, `ft_strtrim`
- `srcs/lists/` — singly linked list utilities
  Header: `includes/lists.h`
  Examples: `ft_lstnew`, `ft_lstadd_back`, `ft_lstiter`, `ft_lstmap`, `ft_lstclear`
- `srcs/ft_printf/` — formatted/output helpers
  Header: `includes/ft_printf.h`
  Examples: `ft_printf`, `ft_printchar`, `ft_printstr`, `ft_printptr`, `ft_printbase`
- `srcs/files/` — file-related helpers
  Headers: `includes/get_next_line.h`, `includes/ft_paths.h`
  Examples: `get_next_line`, `ft_dirname`, `ft_basename`, `ft_extension`, `ft_has_extension`
- `srcs/debug/` — runtime debug mode helpers and CLI debug-flag parsing
  Header: `includes/debug.h`
  Examples: `debug_mode`, `change_debug_mode`, `is_debug_flag`, `parse_debug_mode`

Main umbrella header:

- `libft.h` (includes all module headers)

Build configuration:

- `Makefile`
- `mk/config.mk`
- `mk/sources.mk`

---

## Instructions

### 1) Clone the repository

```bash
git clone git@github.com:vasco-castro/libV.git libft
cd libft
```

### 2) Build the library

```bash
make
```

This produces:

- `libft.a` (static library archive)

### 3) Useful Make targets

- `make` → build `libft.a`
- `make clean` → remove object/dependency files
- `make fclean` → `clean` + remove `libft.a`
- `make re` → full rebuild (`fclean` then `make`)

### 4) Use in another C project

Include headers (at minimum):

```c
#include "libft.h"
```

Compile and link (example):

```bash
cc -Wall -Wextra -Werror "your_file.c" -I./include -L. -lft -o "your_program"
```

> If integrating from another project path, adjust `-I` and `-L` accordingly.

### 5) Debug mode helpers

`libV` includes a small runtime debug-state helper API in `srcs/debug/debug.c` and `includes/debug.h`.

Available helpers:

- `bool debug_mode(void);`
  Returns the current debug state.
- `bool change_debug_mode(bool set);`
  If `set == true`, toggles the internal debug state. Returns current state.
- `bool is_debug_flag(const char *arg);`
  Returns `true` for `--debug` or `-d`.
- `bool parse_debug_mode(int *argc, char *argv[]);`
  Scans arguments for debug flags (`--debug` or `-d`). If found, removes the flag from `argv`, decrements `argc`, and enables debug mode. Returns `true` if a debug flag was found and processed, `false` otherwise.

Typical usage in `main`:

```c
int	main(int argc, char *argv[])
{
	parse_debug_mode(&argc, argv);
	if (debug_mode())
		ft_printf("Debug mode enabled\n");
	/* ...rest of program... */
}
```

Or use the built-in debug-format-printer like this:

```c
int	main(int argc, char *argv[])
{
	parse_debug_mode(&argc, argv);
	debug("This is only printed when debug mode is active\n");
	/* ...rest of program... */
}
```

Notes:

- The debug state is kept internally through a static variable.
- `parse_debug_mode` processes the first debug flag occurrence it encounters and returns immediately, making it safe for programs that expect at most one debug flag.

---

## Resources

### Classic references

- Linux man pages (`man 3 <function>`)
  Useful for expected behavior of libc-like functions.
- The Open Group Base Specifications (POSIX)
  <https://pubs.opengroup.org/>
- cppreference C library pages
  <https://en.cppreference.com/w/c/header>
- 42 Norm (Norminette) documentation (intra / official resources)
- 42 project subjects:
  - `libft`
  - `get_next_line`
  - `ft_printf`

### How AI was used

AI assistance was used as a support tool for:

- README/documentation drafting and structure improvements
- Wording clarity and section organization
- Reviewing command examples for build/integration instructions

AI was **not** used to replace understanding of project logic. Function design, implementation decisions, debugging, and validation remain grounded in project requirements and manual developer work.

---

## Notes

- Language: C
- Output artifact: static library (`libft.a`)
- Intended usage: reusable base library for 42 and other C projects
