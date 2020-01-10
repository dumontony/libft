# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtony <dtony@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/12 08:07:33 by dtony             #+#    #+#              #
#    Updated: 2020/01/02 17:14:38 by dtony            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

LFAGS	=	-lmy -L ./

NAME	=	libft.a

SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_realloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memrcpy.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strnew.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strcat.c \
			ft_strcpy.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c 

BNS		=	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c 

RM		=	rm -f

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(SRC)
		ar rs $(NAME) *.o
		ranlib $(NAME)

bonus:
		$(CC) $(CFLAGS) -c $(SRC) $(BNS)
		ar rs $(NAME) *.o
		ranlib $(NAME)
clean:
		$(RM) *.o

fclean:			clean
		$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus