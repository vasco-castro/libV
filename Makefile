NAME = libV.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

CHR_FTS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_islower ft_isupper \

STR_FTS = ft_strlen \

NUM_FTS = \

PRINT_FTS = ft_println \

SRCS = $(addsuffix .c, $(FUNCTIONS))

OBJS := $(SRCS:%.c=%.o)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@ar rcs $(NAME) $(OBJS)

clean:
	@echo "Cleaning all objects."
	@rm -f $(OBJS)

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@rm -f $(NAME)

re: fclean all

t: $(NAME)
	@echo Running main test file.
	@$(CC) $(CFLAGS) main.c $(NAME) -o test
	@./test
	@rm -f test

.DEFAULT_GOAL := all

.PHONY: all clean fclean re t