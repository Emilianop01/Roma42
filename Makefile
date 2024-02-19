# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epiacent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 20:26:29 by epiacent          #+#    #+#              #
#    Updated: 2024/02/19 20:28:52 by epiacent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ftaddress.c ftnbr.c ftstr.c ftu.c ftwrite.c ftxX.c

OUT = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra
 
.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OUT)
		ar rcs $(NAME) $(OUT)

all:	$(NAME)

clean:
		rm -f $(OUT) $(BOUT)

fclean: clean
		rm -f $(NAME)

re: 	fclean all
