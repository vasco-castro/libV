include targets.mk

CC ?= cc
CFLAGS := -Wall -Wextra -Werror
CFLAGS +=  -I./include

AR := ar
ARFLAGS := rcs
RM	:= rm -f

.PHONY: all clean fclean re t n

.DEFAULT_GOAL := all

BLACK	:= \e[1;30m
RED		:= \e[1;31m
GREEN	:= \e[1;32m
YELLOW	:= \e[1;33m
BLUE	:= \e[1;34m
PURPLE	:= \e[1;35m
CYAN	:= \e[1;36m
WHITE	:= \e[1;37m
RESET	:= \e[0m

# TO CREATE BANNER USE FOLLOW LINKS:
# https://devops.datenkollektiv.de/banner.txt/index.html
# https://devops.datenkollektiv.de/create-your-own-spring-boot-banner.html
# http://patorjk.com/software/taag