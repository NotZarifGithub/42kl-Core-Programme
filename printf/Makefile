# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 14:59:41 by mabd-ram          #+#    #+#              #
#    Updated: 2024/06/27 17:12:39 by mabd-ram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a
LIBFTNAME		= libft.a
LIBFTDIR		= ./libft

CFLAGS			= -Wall -Wextra -Werror
CC				= cc
AR				= ar rcs

SRCS			= 
OFILES			= $(SRCS:.c=.o)



all:			$(NAME)

clean: 
				rm -f $(OFILES)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
