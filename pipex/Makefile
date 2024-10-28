# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 17:34:10 by mabd-ram          #+#    #+#              #
#    Updated: 2024/06/26 03:49:42 by mabd-ram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = pipex
CC   	      = gcc
CFLAGS      = -Wall -Wextra -Werror
SRC_DIR     = srcs/
OBJ_DIR     = obj/
INCLUDE_DIR = includes/
LIBFT_DIR   = libft
SRC         = $(wildcard $(SRC_DIR)/*.c)
OBJ         = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIBFT       = $(LIBFT_DIR)/libft.a
INCLUDE     = -I $(INCLUDE_DIR) -I $(LIBFT_DIR)

all         = $(LIBFT) $(NAME)

# Default target
all: $(LIBFT) $(NAME)

# Build the program
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Build the libft library
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Clean up object files
clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

# Clean everything
fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
