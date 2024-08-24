NAME	=	ARCHIVES
CC		=	gcc
C_FLAGS	=	-Wall -Wextra -Werror
D_FLAGS	=	-ggdb -g3

SRC_STR	=	len scrySigil scryString
SRC_STR	:=	$(addsuffix .c, $(SRC_STR))
TST_STR	:=	$(addprefix tests/string/str_, $(SRC_STR))
SRC_STR	:=	$(addprefix sources/string/str_, $(SRC_STR))

SRC_ALL	=	$(SRC_STR)
TST_ALL = 	$(TST_STR)

OBJ_DIR	=	objects
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRC_ALL:.c=.o))

BIN_DIR	=	binaries
BINS	=	$(addprefix $(BIN_DIR)/, $(TST_ALL:.c=))

ALL		=	$(OBJS) $(BINS)

RESET	=	\033[0m
TITTLE	=	\033[0;48;2;18;78;120;1m
COMMON	=	\033[0;38;2;213;201;223m
DIVISOR	=	\033[0;48;2;207;18;89;1m
GREEN	=	\033[0;38;2;189;191;9;1m

INC		=	-I./includes

all: header comp_obj $(OBJS) comp_tests $(BINS) $(NAME) footer 

$(NAME):
	@echo "DONE"

header:
	@printf "     .    .       .     *  .         .  *     .  .      *      *    .      .    \n"
	@printf "  .     .  *    .    .     . *     .    *   *     .   .    *     .       .  *   .\n"
	@printf "*    .    *        .      .      *   .      .   .     .     .   .   *        .   \n"
	@printf "$(TITTLE)"
	@printf "%-30s%-20s%30s" "META archives" "  META archives" "META Archives"
	@printf "$(RESET)\n$(COMMON)\n"
	@printf "%80s\n" "Welcome digital traveller, welcome to the archives"
	@printf "%80s\n" "All purpose C library."
	@printf "$(TITTLE)"
	@printf "%-30s%-20s%30s" "META archives" "  META archives" "META Archives"
	@printf "$(RESET)\n$(COMMON)"
	@printf " .       *       .             *        .         .      .      .     *    .  *"
	@printf "  .     .  *    .    .     . *     .    *   *     .   .    *     .       .  *   .\n"
	@printf "*    .    *        .      .      *   .      .   .     .     .   .   *        .   \n"

comp_obj:
	@printf "$(RESET)\n$(DIVISOR)"
	@printf "%-30s%-20s%30s" "META archives" "Compiling objects" "META Archives"
	@printf "$(RESET)\n$(COMMON)\n"
	@printf "%80s\n" "Starting compilation of object files..."

comp_tests:
	@printf "$(RESET)\n$(DIVISOR)"
	@printf "%-30s%-20s%30s" "META archives" "Compiling tests" "META Archives"
	@printf "$(RESET)\n$(COMMON)\n"
	@printf "%80s\n" "Starting compilation of test binaries..."

footer:
	@printf "        *    .         .          .        .        .       *          .          *\n"
	@printf "     .      .     .          .          *   .             .   *      .   *  .    \n"
	@printf "     .     .  *       .     .    *     .  *    *      .       .  .  * .   .     *\n"
	@printf "$(TITTLE)"
	@printf "%-30s%-20s%30s" "META archives" "     info" "META Archives"
	@printf "$(RESET)\n$(COMMON)\n"
	@printf "%80s\n" "Made by: Fauna Polaris Pinheiro Leite da Rosa"
	@printf "%80s\n" "Project started at September 2024"
	@printf "%80s\n" "Current Version: 0.0.1"
	@printf "%80s\n" "Last Update: September 2024"
	@printf "$(TITTLE)"
	@printf "%-30s%-20s%30s" "META archives" "  META archives" "META Archives"
	@printf "$(RESET)\n$(COMMON)"
	@printf "     .      .     .          .          *   .             .   *      .   *  .    \n"
	@printf "     .     .  *       .     .    *     .  *    *      .       .  .  * .   .     *\n"
	@printf ".   .     .        *     .     *      .      .  .  *     .  .      .       .   .\n"

$(OBJ_DIR)/%.o: %.c 
	@mkdir -p $(@D)
	@$(eval CURRENT_FILE := $(shell expr $(CURRENT_FILE) + 1))
	@$(eval PERCENT := $(shell echo "scale=2; $(CURRENT_FILE) /	$(words $(ALL)) * 100" | bc))
	@printf	"$(GREEN)%3.0f%%$(RESET) | %-40s\n" "$(PERCENT)" "$(notdir $@)"
	@$(CC) $(C_FLAGS) $(D_FLAGS) -c $< -o $@ $(INC)

$(BIN_DIR)/%: %.c
	@mkdir -p $(@D)
	@$(eval CURRENT_FILE := $(shell expr $(CURRENT_FILE) + 1))
	@$(eval PERCENT := $(shell echo "scale=2; $(CURRENT_FILE) /	$(words $(ALL)) * 100" | bc))
	@printf	"$(GREEN)%3.0f%%$(RESET) | %-40s\n" "$(PERCENT)" "$(notdir $@)"
	@$(CC) $(C_FLAGS) $(D_FLAGS) $< $(OBJS) -o $@ $(INC)

clean: cleaning
	@rm -rf $(OBJ_DIR)
	@rm -rf $(BIN_DIR)/tests

fclean: clean fcleaning
	@rm -rf $(BIN_DIR)

cleaning:
	@printf "$(RESET)\n$(DIVISOR)"
	@printf "%-30s%-20s%30s" "META archives" "Cleaning" "META Archives"
	@printf "$(RESET)\n$(COMMON)\n"
	@printf "%80s\n" "Cleaning objects..."
	@printf "%80s\n" "Cleaning tests..."

fcleaning:
	@printf "%80s\n" "Cleaning binaries..."
	@printf "$(RESET)\n$(DIVISOR)"
	@printf "%-30s%-20s%30s" "META archives" "  META Archives" "META Archives"
	@printf "$(RESET)\n$(COMMON)\n"
	@printf "%80s\n" "Farewell."

re: fclean all

EENONY: all clean fclean re header footer cleaning fcleaning comp_test comp_obj
