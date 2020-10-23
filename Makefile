# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijacquet <ijacquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 16:30:15 by ijacquet          #+#    #+#              #
#    Updated: 2020/10/23 17:20:33 by ijacquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ASM			=	nasm
ASMFLAGS	=	-f macho64
NAME		=	libasm.a
SRC			= 	ft_strlen.s	ft_strcpy.s	ft_strcmp.s	ft_write.s	ft_read.s \
				ft_strdup.s
MAIN		=	main.c
CC			=	gcc
CCFLAGS		=	-Wall -Wextra -Werror

OBJS		=	$(SRC:.s=.o)

%.o:	%.s
	$(ASM) $(ASMFLAGS) -o $@ $<

all:	$(NAME)

$(NAME): $(OBJS) libasm.h
		ar rc $(NAME) $(OBJS)
		$(CC) $(MAIN) $(NAME) -o libasm

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all