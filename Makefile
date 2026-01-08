include config.mk

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS) n
	@printf "$(PURPLE)%s$(RESET)\n" "$$(cat banner.txt)"
	@$(ARQUIVE) $(NAME) $(OBJS)

clean:
	@printf "$(YELLOW)Cleaning all objects.$(RESET)\n"
	@$(REMOVE) $(OBJS) $(TEST_OBJ)

fclean: clean
	@printf "$(YELLOW)Cleaning all $(NAME) files.$(RESET)\n"
	@$(REMOVE) $(NAME) t

re: fclean all

n:
	@norminette | egrep -B1 'Error|Warning' > check_norm || true
	@if [ -s check_norm ]; then \
		printf "$(RED)NORMINETTE: KO$(RESET)\n"; \
		printf "$(RED)"; \
		egrep 'Error|Warning' check_norm | awk '{gsub(/\033\[94m/,""); gsub(/\033\[0m/,""); print}'; \
	else \
		printf "$(GREEN)NORMINETTE: OK$(RESET)\n"; \
	fi
	@rm check_norm
