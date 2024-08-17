NAME	=	ARCHIVES
CC		=	gcc
C_FLAGS	=	-Wall -Wextra -Werror
D_FLAGS	=	-ggdb -g3

SRC_STR	=	len
SRC_STR	:=	$(addprefix sources/string/str_, $(SRC_STR))
SRC_STR	:=	$(addsuffix .c, $(SRC_STR))

SRC_ALL	=	$(SRC_STR)

OBJ_DIR	=	objects
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRC_ALL:.c=.o))

INC		=	-I./includes

all: $(OBJS) $(NAME)

$(NAME):
	@echo "Starting compilation"
	@$(CC) $(C_FLAGS) $(OBJS) $(INC) tests/string/str_len.c -o $@

$(OBJ_DIR)/%.o: %.c 
	@mkdir -p $(@D)
	@printf "compiling: %s into: %s\n" $< $@
	$(CC) $(C_FLAGS) -c $< -o $@ $(INC)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
