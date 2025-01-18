CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

# Define paths
SRC_PATH = src/
OBJ_PATH = obj/
INCLUDE_PATH = includes/

# Source files grouped by directories
SRC = main.c \
      cost/cost.c cost/do_move.c \
      init/initialization.c \
      input_check/input_check.c \
      operations/push.c operations/reverse_rotate.c operations/rotate.c operations/swap.c \
      position/position.c \
      sorting/sort.c \
      stack/stack.c \
      utils.c

# Object files (with directories under obj/)
OBJ = $(addprefix $(OBJ_PATH), $(SRC:%.c=%.o))

# Include directories
INCS = -I $(INCLUDE_PATH)

# Default target
all: $(OBJ_PATH) $(NAME)

# Rule to create directories
$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)
	@mkdir -p $(OBJ_PATH)cost
	@mkdir -p $(OBJ_PATH)init
	@mkdir -p $(OBJ_PATH)input_check
	@mkdir -p $(OBJ_PATH)operations
	@mkdir -p $(OBJ_PATH)position
	@mkdir -p $(OBJ_PATH)sorting
	@mkdir -p $(OBJ_PATH)stack

# Rule to compile .c files to .o files
$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Define phony targets
.PHONY: all clean fclean re

