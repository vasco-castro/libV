
# Directories
CHR_DIR = ./chars/
CVR_DIR	= ./converts/
FLS_DIR	= ./files/
MMR_DIR = ./memory/
PRT_DIR	= ./prints/
STR_DIR	= ./strings/

# Source files (with directories applied)
CHR_FTS = ft_islower ft_isupper ft_isalpha ft_isdigit ft_isxdigit ft_isalnum ft_ispunct \
			ft_isgraph ft_isprint ft_isblank ft_isspace ft_iscntrl ft_isascii
CHR_SRC = $(addsuffix .c, $(addprefix $(CHR_DIR), $(CHR_FTS)))

CVR_FTS = ft_atoi ft_itoa ft_tolower ft_toupper
CVR_SRC = $(addsuffix .c, $(addprefix $(CVR_DIR), $(CVR_FTS)))

FLS_FTS = get_next_line
FLS_SRC = $(addsuffix .c, $(addprefix $(FLS_DIR), $(FLS_FTS)))

MMR_FTS = ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset
MMR_SRC = $(addsuffix .c, $(addprefix $(MMR_DIR), $(MMR_FTS)))

PRT_FTS = ft_printchar ft_printstr ft_printtab ft_printbase ft_printf
PRT_SRC = $(addsuffix .c, $(addprefix $(PRT_DIR), $(PRT_FTS)))

STR_FTS = ft_strlen
STR_SRC = $(addsuffix .c, $(addprefix $(STR_DIR), $(STR_FTS)))

SRCS = $(CHR_SRC) $(CVR_SRC) $(FLS_SRC) $(MMR_SRC) $(PRT_SRC) $(STR_SRC)

# OBJ  = $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(ARR)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(CHK)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(CNV)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(BIT)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(GET)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(LST)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(MEM)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(PUT)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(STR)))
# OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(PRINTF)))

# Object files convertion
OBJS := $(SRCS:%.c=%.o)

# OBJ = $(SRCS:$(SRC_PATH)/%.c=$(OBJ_DIR)/%.o)

# $(OBJ_DIR)/%.o: $(SRC_PATH)/%.c
# 	@mkdir -p $(@D)
# 	$(CC) -c $< -o $@

# %.o: %.c
# 	$(CC) -c $< -o $@