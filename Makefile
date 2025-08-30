include config.mk

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@$(BANNER)
	@$(ARQUIVE) $(NAME) $(OBJS)

clean:
	@printf "$(YELLOW)Cleaning all objects.$(RESET)\n"
	@$(REMOVE) $(OBJS)

fclean: clean
	@printf "$(YELLOW)Cleaning all $(NAME) files.$(RESET)\n"
	@$(REMOVE) $(NAME)
	@$(REMOVE) $(TEST)

re: fclean all