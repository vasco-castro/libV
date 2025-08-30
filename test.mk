# RUN TEST by just executing: "make t"

TEST = test

TEST_SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, main))
TEST_OBJ = $(TEST_SRC:%.c=%.o)

t: $(TEST)

test: all $(TEST_OBJ)
	@printf "$(PURPLE)Building test file.$(RESET)\n"
	@$(COMPILE) -Iinclude $(NAME) $(TEST_OBJ) -o $(TEST)
	@printf "$(BLUE)Running test file.$(RESET)\n"
	@./$(TEST)
