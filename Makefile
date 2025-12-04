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
	@norminette | egrep -B1 'Error|Warning' >check_norm || true
	@if [ -s check_norm ]; then \
		echo "\e[1;31mNORMINETTE: KO\e[0m"; \
		echo "\e[1;31m"; \
		cat check_norm | egrep 'Error|Warning' | awk '{gsub(/\033\[94m/,""); gsub(/\033\[0m/,""); print}'; \
	else \
		echo "\e[1;32mNORMINETTE: OK\e[0m"; \
	fi
	@rm check_norm
