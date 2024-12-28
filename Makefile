# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 06:40:48 by nkasimi           #+#    #+#              #
#    Updated: 2024/11/19 16:02:22 by nkasimi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_printhexa.c\
	ft_printf.c\
	ft_printfuhexa.c\
	ft_putunbr.c\
	format_specifier.c\
	ft_print_ptr.c
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY : clean fclean re all