
COMPILE = cc -Wall -Wextra -Werror
ARQUIVE = ar rcs
REMOVE = rm -f

.PHONY: all clean fclean re t

.DEFAULT_GOAL := all