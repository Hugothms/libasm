# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/15 13:33:22 by hthomas           #+#    #+#              #
#    Updated: 2020/07/16 09:26:02 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libasm.a
OBJS		=	${SRCS:.s=.o}
CC			=	nasm
FLAGS		=	-f elf64
SRCS 		=	srcs/ft_strlen.s			\
				srcs/ft_strcpy.s
				# srcs/ft_strcmp.s			\
				# srcs/ft_write.s			\
				# srcs/ft_read.s			\
				# srcs/ft_strdup.s

all:		$(NAME)

$(NAME):	${OBJS}
	ar rc $(NAME) ${OBJS}
	ranlib $(NAME)

.s.o:
	${CC} ${FLAGS} -I . $<

test:		$(NAME)
	gcc -I . main.c $< -o test

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all
