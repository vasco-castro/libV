include config.mk

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@$(BANNER)
	@$(ARQUIVE) $(NAME) $(OBJS)

clean:
	@printf "$(YELLOW)Cleaning all objects.$(RESET)\n"
	@$(REMOVE) $(OBJS) $(TEST_OBJ)

fclean: clean
	@printf "$(YELLOW)Cleaning all $(NAME) files.$(RESET)\n"
	@$(REMOVE) $(NAME) $(TEST)

re: fclean all