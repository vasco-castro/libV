NAME = libft.a

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_islower ft_isupper ft_strlen

SRCS = $(addsuffix .c, $(FUNCTIONS))

OBJS := $(SRCS:%.c=%.o)

# %.o: %.c
# 	$(COMPILER) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning all objects."
	@rm -f $(OBJS)

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@rm -f $(NAME)

re: fclean all

t: $(NAME)
	@echo Running main test file.
	@$(COMPILER) $(CFLAGS) main.c $(NAME) -o test
	@./test
	@rm -f test

.DEFAULT_GOAL := all

.PHONY: all clean fclean re t