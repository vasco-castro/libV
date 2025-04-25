include config.mk
include targets.mk

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@$(ARQUIVE) $(NAME) $(OBJS)

clean:
	@echo "Cleaning all objects."
	@$(REMOVE) $(OBJS)

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@$(REMOVE) $(NAME)

re: fclean all

t: $(NAME)
	@echo Compiling main test file.
	@$(COMPILE) main.c $(NAME) -o test
#	@./test
#	@echo Running main test file.
#	@$(REMOVE) test