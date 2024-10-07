/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:10:49 by mmariano          #+#    #+#             */
/*   Updated: 2024/08/17 17:57:51 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_column(int x, int y, char lim)
{
	int	i;

	while (y-- > 2)
	{
		ft_putchar(lim);
		if (x > 1)
		{
			i = 2;
			while (x > i++)
				ft_putchar(' ');
			ft_putchar(lim);
		}	
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		print_line(x, 'A', 'B', 'C');
	print_column(x, y, 'B');
	if (y >= 2)
		print_line(x, 'A', 'B', 'C');
}
