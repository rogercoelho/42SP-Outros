/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalaibb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:08:01 by msalaibb          #+#    #+#             */
/*   Updated: 2024/08/18 03:33:33 by msalaibb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char a);

void	char_data_continue(int line, int column, char c[5][7])
{
	c[3][1] = 'B';
	c[3][2] = 'C';
	c[3][3] = 'B';
	c[3][4] = ' ';
	c[3][5] = 'A';
	c[3][6] = 'C';
	c[4][0] = 'A';
	c[4][1] = 'B';
	c[4][2] = 'C';
	c[4][3] = 'B';
	c[4][4] = ' ';
	c[4][5] = 'C';
	c[4][6] = 'A';
	ft_putchar(c[column][line]);
}

void	char_data(int line, int column)
{
	char	c[5][7];

	c[0][0] = 'o';
	c[0][1] = '-';
	c[0][2] = 'o';
	c[0][3] = '|';
	c[0][4] = ' ';
	c[0][5] = 'o';
	c[0][6] = 'o';
	c[1][0] = '/';
	c[1][1] = '*';
	c[1][2] = '\\';
	c[1][3] = '*';
	c[1][4] = ' ';
	c[1][5] = '\\';
	c[1][6] = '/';
	c[2][0] = 'A';
	c[2][1] = 'B';
	c[2][2] = 'A';
	c[2][3] = 'B';
	c[2][4] = ' ';
	c[2][5] = 'C';
	c[2][6] = 'C';
	c[3][0] = 'A';
	char_data_continue(line, column, c);
}

void	line_one(int y, int c_y, char p, int rush_index)
{
	if (c_y == 1 && p == 't')
	{
		char_data(0, rush_index);
	}
	else if (c_y == y && p == 't')
	{
		char_data(2, rush_index);
	}
	else if (c_y == 1 && p == 'b')
	{
		char_data(5, rush_index);
	}
	else if (c_y == y && p == 'b')
	{
		char_data(6, rush_index);
	}
	else
	{
		char_data(1, rush_index);
	}
}

void	line_two(int y, int c_y, int rush_index)
{
	if (c_y == 1 || c_y == y)
	{
		char_data(3, rush_index);
	}
	else
	{
		char_data(4, rush_index);
	}
}

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;
	int	rush_index;

	rush_index = 0;
	c_x = 1;
	while (c_x <= x)
	{
		c_y = 1;
		while (c_y <= y)
		{
			if (c_x == 1)
				line_one(y, c_y++, 't', rush_index);
			else if (c_x == x)
				line_one(y, c_y++, 'b', rush_index);
			else
				line_two(y, c_y++, rush_index);
		}
		write(1, "\n", 2);
		c_x++;
	}
}
