

NAME = so_long
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

# Source code directories and files
SRC_DIR = srcs/
OBJ_DIR = obj/
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Libft and other libraries
LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a
MINILIBX_DIR = mlx/
MINILIBX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11
MINILIBX = $(MINILIBX_DIR)libmlx.a
GETNEXTLINE_DIR = getnextline/
GETNEXTLINE_SRC = $(wildcard $(GETNEXTLINE_DIR)/*.c)
GETNEXTLINE = $(GETNEXTLINE_SRC:$(GETNEXTLINE_DIR)/%.c=$(OBJ_DIR)/%.o)
FT_PRINTF_DIR = printf/
FT_PRINTF = $(FT_PRINTF_DIR)libftprintf.a

# Include directories
INCLUDES_DIR = includes/
INCLUDES = -I $(INCLUDES_DIR) -I $(LIBFT_DIR) -I $(MINILIBX_DIR) -I $(GETNEXTLINE_DIR) -I $(FT_PRINTF)/includes

# Default target
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(MINILIBX) $(GETNEXTLINE) $(FT_PRINTF)
	$(CC) $(OBJ) $(LIBFT) $(MINILIBX_FLAGS) $(GETNEXTLINE) $(FT_PRINTF) -o $(NAME)

# Rule to compile .c to .o for source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to compile .c to .o for getnextline
$(OBJ_DIR)/%.o: $(GETNEXTLINE_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to build object directory
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Rule to build libft.a
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Rule to build libmlx.a
$(MINILIBX):
	$(MAKE) -C $(MINILIBX_DIR)

# Rule to build ft_printf.a
$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

# Clean object files and libraries
clean: 
	rm -f $(OBJ_DIR)/*.o
	rm -f $(MINILIBX_DIR)/*.o
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean

# Fully clean the build
fclean: clean
	rm -rf $(NAME) $(OBJ_DIR) $(LIBFT) $(FT_PRINTF)

# Rebuild everything
re: fclean all
