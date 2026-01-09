include config.mk

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS) n
	@printf "$(PURPLE)%s$(RESET)\n" "$$(cat banner.txt)"
	@$(ARQUIVE) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@printf "$(YELLOW)Cleaning $(NAME) objects.$(RESET)\n"
	@$(REMOVE) $(OBJS) $(TEST_OBJ)

fclean: clean
	@printf "$(YELLOW)Cleaning $(NAME) binaries.$(RESET)\n"
	@$(REMOVE) $(NAME) t

re: fclean all

n:
	@norminette | egrep -B1 'Error|Warning' > check_norm || true
	@if [ -s check_norm ]; then \
		printf "$(RED)LIBFT - NORMINETTE: KO$(RESET)\n"; \
		printf "$(RED)"; \
		egrep 'Error|Warning' check_norm | awk '{gsub(/\033\[94m/,""); gsub(/\033\[0m/,""); print}'; \
	else \
		printf "$(GREEN)LIBFT - NORMINETTE: OK$(RESET)\n"; \
	fi
	@rm check_norm
