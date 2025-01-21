CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

SRC_PATH = src/
OBJ_PATH = obj/
INCLUDE_PATH = includes/

SRC = main.c \
      cost/cost.c cost/begin_move.c \
      init/init.c \
      input_check/input_check.c \
      operations/push.c operations/reverse_rotate.c operations/rotate.c operations/swap.c \
      position/position.c position/position_utils.c \
      sorting/sort.c sorting/sort_begin.c\
      stack/stack.c \
      utils.c

OBJ = $(addprefix $(OBJ_PATH), $(SRC:%.c=%.o))

INCS = -I $(INCLUDE_PATH)

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)/cost \
             $(OBJ_PATH)/init \
             $(OBJ_PATH)/input_check \
             $(OBJ_PATH)/operations \
             $(OBJ_PATH)/position \
             $(OBJ_PATH)/sorting \
             $(OBJ_PATH)/stack

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(dir $@)  # This will ensure the target directory exists before compiling.
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)


$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
