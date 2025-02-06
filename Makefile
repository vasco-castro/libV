NAME = libV.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
CHR_DIR = ./chars/
CVR_DIR	= ./converts/
FLS_DIR	= ./files/
MMR_DIR = ./memory/
PRT_DIR	= ./prints/
STR_DIR	= ./strings/

# Source files (with directories applied)
CHR_FTS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_islower ft_isupper
CHR_SRC = $(addsuffix .c, $(addprefix $(CHR_DIR), $(CHR_FTS)))

CVR_FTS = ft_atoi ft_itoa ft_tolower ft_toupper
CVR_SRC = $(addsuffix .c, $(addprefix $(CVR_DIR), $(CVR_FTS)))

FLS_FTS = get_next_line
FLS_SRC = $(addsuffix .c, $(addprefix $(FLS_DIR), $(FLS_FTS)))

MMR_FTS = ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
MMR_SRC = $(addsuffix .c, $(addprefix $(MMR_DIR), $(MMR_FTS)))

PRT_FTS = ft_printbase ft_printchar ft_printstr ft_printf
PRT_SRC = $(addsuffix .c, $(addprefix $(PRT_DIR), $(PRT_FTS)))

STR_FTS = ft_strlen
STR_SRC = $(addsuffix .c, $(addprefix $(STR_DIR), $(STR_FTS)))

SRCS = $(CHR_SRC) $(CVR_SRC) $(FLS_SRC) $(MMR_SRC) $(PRT_SRC) $(STR_SRC)

# Object files convertion
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
	@echo Compiling main test file.
	@$(CC) $(CFLAGS) main.c $(NAME) -o test.out
#	@./test
#	@echo Running main test file.
#	@rm -f test

.DEFAULT_GOAL := all

.PHONY: all clean fclean re t