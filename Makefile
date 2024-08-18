NAME	=	ARCHIVES
CC		=	gcc
C_FLAGS	=	-Wall -Wextra -Werror
D_FLAGS	=	-ggdb -g3

SRC_STR	=	len hasChar
SRC_STR	:=	$(addsuffix .c, $(SRC_STR))
TST_STR	:=	$(addprefix tests/string/str_, $(SRC_STR))
SRC_STR	:=	$(addprefix sources/string/str_, $(SRC_STR))

SRC_ALL	=	$(SRC_STR)
TST_ALL = 	$(TST_STR)

OBJ_DIR	=	objects
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRC_ALL:.c=.o))

BIN_DIR	=	binaries
BINS	=	$(addprefix $(BIN_DIR)/, $(TST_ALL:.c=))

INC		=	-I./includes

all: $(OBJS) $(BINS) $(NAME)

$(NAME):
	@echo DONE

$(OBJ_DIR)/%.o: %.c 
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INC)

$(BIN_DIR)/%: %.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) $< $(OBJS) -o $@ $(INC)

clean:
	@rm -rf $(OBJ_DIR)
	@rm -rf $(BIN_DIR)/tests

fclean: clean
	@rm -rf $(BIN_DIR)

re: fclean all

.PHONY: all clean fclean re
