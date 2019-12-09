# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glatega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/08 22:46:52 by glatega           #+#    #+#              #
#    Updated: 2018/07/31 20:25:39 by glatega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler
CC = gcc
FLAGS = -Wall -Wextra -Werror
COMP = $(CC) $(FLAGS)
FILLER_H = -I ./
LIBFT_H = -I ./libft/includes
LIBFT = -L./libft -lft
SRC = filler.c \
	  print_map.c \
	  pop_grid.c \
	  init.c \
	  f_row.c \
	  f_col.c \
	  l_row.c \
	  l_col.c \
	  trim_token.c \
	  free_grid.c \
	  mem_clean.c \
	  place_token.c \
	  output_token.c \
	  token_heat.c \
	  is_valid.c \
	  occupied_by_c.c \
	  make_heatmap.c \
	  block_obstruct.c \
	  v_obstruct.c \
	  h_obstruct.c \
	  print_player_key.c \
	  deal_with_it.c

OBJ := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft
	$(COMP) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(COMP) -c $< $(LIBFT_H) $(FILLER_H) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
