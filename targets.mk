
# Directories
CHR_DIR = ./chars/
CVR_DIR	= ./converts/
FLS_DIR	= ./files/
MMR_DIR = ./memory/
PRT_DIR	= ./prints/
STR_DIR	= ./strings/

# Source files
CHR_FTS = ft_islower ft_isupper ft_isalpha ft_isdigit ft_isxdigit ft_isalnum ft_ispunct \
			ft_isgraph ft_isprint ft_isblank ft_isspace ft_iscntrl ft_isascii
CVR_FTS = ft_atoi ft_itoa ft_tolower ft_toupper
FLS_FTS = get_next_line
MMR_FTS = ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
PRT_FTS = ft_printchar ft_printstr ft_printtab ft_printbase ft_printf
STR_FTS = ft_strlen ft_tabdel \
	ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_strlcpy ft_strlcat \
	ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri

# All source files with suffix .c and prefix directories separated by spaces
SRCS = $(addsuffix .c, $(addprefix $(CHR_DIR), $(CHR_FTS))) \
	$(addsuffix .c, $(addprefix $(CVR_DIR), $(CVR_FTS))) \
	$(addsuffix .c, $(addprefix $(FLS_DIR), $(FLS_FTS))) \
	$(addsuffix .c, $(addprefix $(MMR_DIR), $(MMR_FTS))) \
	$(addsuffix .c, $(addprefix $(PRT_DIR), $(PRT_FTS))) \
	$(addsuffix .c, $(addprefix $(STR_DIR), $(STR_FTS))) \

# Object files convertion
OBJS := $(SRCS:%.c=%.o)