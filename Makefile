include config.mk

NAME := libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(PURPLE)%s$(RESET)\n" "$$(cat banner.txt)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	@printf "$(YELLOW)Cleaning $(NAME) objects.$(RESET)\n"
	@$(RM) $(OBJS) $(OBJS:.o=.d) $(TEST_OBJ)

fclean: clean
	@printf "$(YELLOW)Cleaning $(NAME) binaries.$(RESET)\n"
	@$(RM) $(NAME) test

re: fclean all

# TODO: Make a temp file for each object or put it inside the *.d files
# 	,that will write norminette output of that file specifically.
# 	And it will only ran norminette rule again if object file is recompiled.
n:
	@norminette | egrep -B1 'Error|Warning' > check_norm || true
	@if [ -s check_norm ]; then \
		printf "$(RED)LIBFT - NORMINETTE: KO$(RESET)\n"; printf "$(RED)"; \
		egrep 'Error|Warning' check_norm | awk '{gsub(/\033\[94m/,""); gsub(/\033\[0m/,""); print}'; \
	else \
		printf "$(GREEN)LIBFT - NORMINETTE: OK$(RESET)\n"; \
	fi
	@rm check_norm

t: test
	@./$<

test: $(NAME) $(TEST_OBJ)
	@$(CC) $(CFLAGS) -I./tests $(NAME) $(TEST_OBJ) -o $@ -lft -L.
	@printf "$(BLUE)Running test file.$(RESET)\n"
