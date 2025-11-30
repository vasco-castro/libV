include colors.mk
include targets.mk
include tests.mk

CC = cc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)
ARQUIVE = ar rcs
REMOVE = rm -f

.PHONY: all clean fclean re t

.DEFAULT_GOAL := all