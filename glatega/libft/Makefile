# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glatega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/17 14:51:05 by glatega           #+#    #+#              #
#    Updated: 2018/07/31 19:38:27 by glatega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#./bin/sh

NAME = libft.a
CC = gcc
FLAG = -Wall -Wextra -Werror
COMP = $(CC) $(FLAG)
INCLUDE = -I includes/
SRC = ft_frontcut.c \
	  ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_lstprepend.c \
	  ft_lstappend.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstnew.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strsplit.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_isupper.c \
	  ft_islower.c \
	  ft_nbrlen.c \
	  ft_putnstr_fd.c \
	  ft_putnstr.c \
	  get_next_line.c \
	  ft_abs.c \
	  arrappend.c

OBJ := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $?
	ranlib $(NAME)

%.o: %.c
	$(COMP) -c $< $(INCLUDE) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
