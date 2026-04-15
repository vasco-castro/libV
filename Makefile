
-include mk/config.mk
-include mk/sources.mk

NAME := libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(PURPLE)%s$(RESET)\n" "$$(cat banner.txt)"
	@$(RM) $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	@printf "$(YELLOW)Cleaning $(NAME) objects.$(RESET)\n"
	@$(RM) $(OBJS) $(OBJS:.o=.d) $(TEST_OBJ)

fclean: clean
	@printf "$(YELLOW)Cleaning $(NAME) binaries.$(RESET)\n"
	@$(RM) $(NAME) test

re: fclean all

# t: test
# 	@./$<

# test: $(NAME) $(TEST_OBJ)
# 	@$(CC) $(CFLAGS) -I./tests $(NAME) $(TEST_OBJ) -o $@ -lft -L.
# 	@printf "$(BLUE)Running test file.$(RESET)\n"

.PHONY: all clean fclean re t

.DEFAULT_GOAL := all
