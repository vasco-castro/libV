
# Main Directories
INCS_DIR	:= includes/
SRCS_DIR	:= srcs/
OBJS_DIR	:= objs/

CFLAGS		+= -I. -I$(INCS_DIR)

# Source files directories
CVR_DIR		:= converts/
CTY_DIR		:= ft_ctype/
FLS_DIR		:= files/
LST_DIR		:= lists/
MMR_DIR		:= ft_memory/
PRT_DIR		:= ft_printf/
STR_DIR		:= ft_string/
DBG_DIR		:= debug/

# Source files
CVR_FTS		:= ft_atoi ft_atol ft_itoa ft_tolower ft_toupper
CTY_FTS		:= ft_islower ft_isupper ft_isalpha ft_isdigit ft_isxdigit ft_isalnum ft_ispunct \
				ft_isgraph ft_isprint ft_isblank ft_isspace ft_iscntrl ft_isascii ft_issign
FLS_FTS		:= get_next_line ft_paths
LST_FTS		:= ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter \
				ft_lstlast ft_lstmap ft_lstnew ft_lstsize
MMR_FTS		:= ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
PRT_FTS		:= ft_printchar ft_printbool ft_printptr ft_printstr ft_printtab \
				ft_printbase ft_printf ft_printfile
STR_FTS		:= ft_strlen ft_tabcpy ft_tablen ft_tabfree ft_tknlen ft_tkncount \
				ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_strlcpy ft_strlcat \
				ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri \
				ft_strcmp ft_strndup ft_strnlen
DBG_FTS		:= debug

# All source files with suffix .c and prefix directories separated by spaces
SRCS		:= $(addprefix $(SRCS_DIR), $(addsuffix .c, \
	$(addprefix $(CVR_DIR), $(CVR_FTS)) \
	$(addprefix $(CTY_DIR), $(CTY_FTS)) \
	$(addprefix $(FLS_DIR), $(FLS_FTS)) \
	$(addprefix $(LST_DIR), $(LST_FTS)) \
	$(addprefix $(MMR_DIR), $(MMR_FTS)) \
	$(addprefix $(PRT_DIR), $(PRT_FTS)) \
	$(addprefix $(STR_DIR), $(STR_FTS)) \
	$(addprefix $(DBG_DIR), $(DBG_FTS)) \
))

# Create object files and dependency files from source files
OBJS 		:= $(SRCS:$(SRCS_DIR)%.c=$(OBJS_DIR)%.o)
DEPS 		:= $(OBJS:.o=.d)

# Compile each source into its corresponding object file. Using a pattern rule
# ensures `$@`/`$<` map correctly for each pair and `make` accurately
# rebuilds only changed objects.
$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)
