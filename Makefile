# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/15 13:33:22 by hthomas           #+#    #+#              #
#    Updated: 2020/07/25 17:13:09 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libasm.a
OBJS		=	${SRCS:.s=.o}
NASM		=	nasm
CC			=	gcc
FLAGS		=	-f elf64
SRCS 		=	srcs/ft_strlen.s			\
				srcs/ft_strcpy.s			\
				srcs/ft_write.s				\
				srcs/ft_strcmp.s			
				# srcs/ft_read.s			\
				# srcs/ft_strdup.s

all:		$(NAME)

$(NAME):	${OBJS}
	ar rc $(NAME) ${OBJS}
	ranlib $(NAME)

.s.o:
	${NASM} ${FLAGS} -I . $<

test:		$(NAME)
	$(CC) -fsanitize=address -g3 -I . main.c $< -o test
	./test

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY: test
