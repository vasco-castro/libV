# ██╗     ██╗██████╗ ███████╗████████╗
# ██║     ██║██╔══██╗██╔════╝╚══██╔══╝
# ██║     ██║██████╔╝█████╗     ██║
# ██║     ██║██╔══██╗██╔══╝     ██║
# ███████╗██║██████╔╝██║        ██║
# ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝

-include mk/config.mk
-include mk/sources.mk

NAME := libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(PURPLE)%s$(RESET)\n" "$$(cat banner.txt)"
	@$(RM) $(NAME)
	@$(AR) $(NAME) $(OBJS)

clean:
	@printf "$(YELLOW)Cleaning $(NAME) objects.$(RESET)\n"
	@$(RM) $(OBJS) $(DEPS)

fclean: clean
	@printf "$(YELLOW)Cleaning $(NAME) binaries.$(RESET)\n"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re t

.DEFAULT_GOAL := all
