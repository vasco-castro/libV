# RUN TEST by just executing: "make t"

TEST = test
TEST_DIR = ./tests/

# Test source files
TEST_SRC = $(TEST_DIR)main.c \
		   $(TEST_DIR)test_utils.c \
		   $(TEST_DIR)memory/test_memory_main.c \
		   $(TEST_DIR)memory/test_memory_ops.c \
		   $(TEST_DIR)memory/test_memory_cmp.c \
		   $(TEST_DIR)strings/test_strings.c \
		   $(TEST_DIR)strings/test_strings_basic.c \
		   $(TEST_DIR)strings/test_strings_manip.c \
		   $(TEST_DIR)strings/test_strings_split.c \
		   $(TEST_DIR)converts/test_converts.c \
		   $(TEST_DIR)ctype/test_ctype_main.c \
		   $(TEST_DIR)ctype/test_ctype_checks.c \
		   $(TEST_DIR)ctype/test_ctype_case.c \
		   $(TEST_DIR)lists/test_lists_main.c \
		   $(TEST_DIR)lists/test_lists_ops.c \
		   $(TEST_DIR)prints/test_prints.c \
		   $(TEST_DIR)files/test_files.c \
		   $(TEST_DIR)debug/test_debug.c

TEST_OBJ = $(TEST_SRC:%.c=%.o)

t: $(TEST)

test: all $(TEST_OBJ)
	@printf "$(PURPLE)Building test suite.$(RESET)\n"
	@$(COMPILE) -Iinclude $(TEST_OBJ) $(NAME) -o $(TEST)
	@printf "$(BLUE)Running test suite.$(RESET)\n"
	@./$(TEST)
