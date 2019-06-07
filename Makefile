# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anazri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 08:05:30 by anazri            #+#    #+#              #
#    Updated: 2019/06/07 08:28:23 by anazri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_memalloc.c ft_putnbr.c	ft_striter.c ft_strnew.c ft_memccpy.c\	
		ft_putnbr_fd.c ft_striteri.c ft_strnstr.c ft_atoi.c  ft_memchr.c\	
		ft_putstr.c	ft_strjoin.c ft_strrchr.c ft_bzero.c ft_memcmp.c\ 
		ft_strcat.c	ft_strlcat.c ft_strsplit.c ft_isalnum.c	ft_memcpy.c\	
		ft_strchr.c	ft_strlen.c	ft_strstr.c ft_isalpha.c ft_memdel.c\	
		ft_strclr.c	ft_strmap.c	ft_strtrim.c ft_isascii.c ft_memmove.c\	
		ft_strcmp.c	ft_strmapi.c ft_tolower.c ft_isdigit.c ft_memset.c\	
		ft_strcpy.c	ft_strncat.c ft_toupper.c ft_isprint.c ft_putchar.c\	
		ft_strdel.c	ft_strncmp.c ft_itoa.c ft_putchar_fd.c ft_strdup.c\	
		ft_strncpy.c

all : $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) 

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all
