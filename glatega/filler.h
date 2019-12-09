/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:43:37 by glatega           #+#    #+#             */
/*   Updated: 2018/07/31 19:03:21 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"
# define B_RED "\e[48;5;124m"
# define B_LRED "\e[48;5;160m"
# define B_BLU "\e[48;5;019m"
# define B_LBLU "\e[48;5;021m"
# define B_GRY "\e[48;5;235m"
# define B_GRN "\e[48;5;028m"
# define B_BLK "\e[48;5;0m"
# define B_RST "\e[0m"
# define GOTOPLEFT "\033[H"
# define CLEAR "\033[2J"
# include "libft.h"

typedef struct		s_heat
{
	int			x;
	int			y;
	int			value;
}					t_heat;

typedef struct		s_grid
{
	char		**data;
	int			h;
	int			w;
	int			offset_x;
	int			offset_y;
}					t_grid;

typedef struct		s_player
{
	int			self;
	int			enemy;
	int			density_o;
	int			density_x;
}					t_player;

typedef struct		s_game
{
	t_grid		map;
	t_grid		token;
	t_player	player;
	t_heat		heat;
}					t_game;

void				print_map(t_grid grid);
void				pop_grid(t_grid *grid, char *header, int offset);
t_game				*init(void);
int					f_row(t_grid token);
int					f_col(t_grid token);
int					l_row(t_grid token);
int					l_col(t_grid token);
void				free_grid(t_grid *grid);
void				trim_token(t_grid *t);
void				mem_clean(t_game *filler);
void				place_token(t_game *filler);
void				output_token(t_game *filler);
int					token_heat(t_game *filler, int **heatmap, int x, int y);
int					is_valid(t_game *filler, int x, int y);
int					occupied_by_c(t_game *filler, int x, int y, char c);
int					**make_heatmap(t_game *filler);
int					block_obstruct(t_game *filler, int x, int y);
int					v_obstruct(t_game *filler, int x, int y, int len);
int					h_obstruct(t_game *filler, int x, int y, int len);
void				deal_with_it(t_game *filler, char *line);
void				print_player_key(int width);
#endif
