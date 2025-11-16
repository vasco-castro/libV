# RUN TEST by just executing: "make t"
# or running already compiled program "t"

TESTS_DIR = tests/
TEST_SRC = $(addprefix $(TESTS_DIR), $(addsuffix .c, main test1 test3 test4))
TEST_OBJ = $(TEST_SRC:%.c=%.o)

t: $(NAME) $(TEST_OBJ)
	@printf "$(PURPLE)Building test file.$(RESET)\n"
	@$(COMPILE) $(TEST_OBJ) -Iinclude $(NAME) -o t
	@printf "$(BLUE)Running test file.$(RESET)\n"
	@./t
