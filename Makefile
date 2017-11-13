# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpringau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 12:20:02 by jpringau          #+#    #+#              #
#    Updated: 2017/11/13 14:01:20 by jpringau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_isprint.c ft_putstr.c ft_strlcat.c ft_strstr.c ft_itoa.c ft_memset.c ft_putstr_fd.c ft_strlen.c ft_tolower.c ft_atoi.c ft_memalloc.c ft_putchar.c ft_strcat.c ft_strncat.c ft_toupper.c ft_bzero.c ft_memccpy.c ft_putchar_fd.c ft_strchr.c ft_strncmp.c ft_isalnum.c ft_memchr.c ft_putendl.c ft_strcmp.c ft_strncpy.c ft_isalpha.c ft_memcmp.c ft_putendl_fd.c ft_strcpy.c ft_strnew.c ft_isascii.c ft_memcpy.c ft_putnbr.c ft_strdel.c ft_strnstr.c ft_isdigit.c ft_memdel.c ft_putnbr_fd.c ft_strdup.c ft_strrchr.c

OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) :
	@gcc -c $(SOURCE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean make

