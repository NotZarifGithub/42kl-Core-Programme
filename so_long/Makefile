

NAME = so_long
CC = gcc
CFLAGS = #-Wall #-Wextra #-Werror

#Libft
LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

#source code
SRC_DIR = srcs/
OBJ_DIR = obj/
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

#includes
INCLUDES_DIR = includes/
INCLUDES = -I $(INCLUDES_DIR) -I $(LIBFT_DIR) -I $(MINILIBX_DIR)

#Minilibx 
MINILIBX_DIR = mlx/
MINILIBX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11
MINILIBX = $(MINILIBX_DIR)libmlx.a

#Default target
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(MINILIBX)
	$(CC) $(OBJ) $(LIBFT) $(MINILIBX_FLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

#Rule to build libft.a
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

#Rule to build libmlx.a
$(MINILIBX):
	$(MAKE) -C $(MINILIBX_DIR)

clean: 
	rm -f $(OBJ_DIR)/*.o
	rm -f $(MINILIBX_DIR)/*.o
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME) $(OBJ) $(OBJ_DIR)

re: fclean all
