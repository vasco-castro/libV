BLACK	= \e[1;30m
RED		= \e[1;31m
GREEN	= \e[92m
YELLOW	= \e[1;33m
BLUE	= \e[1;34m
PURPLE	= \e[1;35m
CYAN	= \e[1;36m
WHITE	= \e[1;37m
RESET	= \e[0m

BANNER = printf "$(PURPLE)%s$(RESET)\n" "$$(cat banner.txt)"
