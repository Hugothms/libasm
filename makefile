# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/15 13:33:22 by hthomas           #+#    #+#              #
#    Updated: 2020/06/15 13:38:30 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libasm.a
OBJS		=	${SRCS:.s=.o}
CC			=	nasm
FLAGS		=	-f elf64
SRCS 		=	ft_strlen.s			\
				ft_strcpy.s
				# ft_strcmp.s			\
				# ft_write.s			\
				# ft_read.s			\
				# ft_strdup.s

all:		$(NAME)

$(NAME):	${OBJS}
	ar rc $(NAME) ${OBJS}
	ranlib $(NAME)

.s.o:
	${CC} ${FLAGS} $<

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all
