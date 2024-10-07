/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:02:49 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/15 14:56:51 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;
	char tela[10];

	n1 = 0;
	while (n1 <= 7)
	{
			n2 = n1 + 1;
		while (n2 <= 8)
		{
				n3 = n2 + 1;
			while (n3 <= 9)
			{
				sprintf(tela, "%d", n1);
				sprintf(tela, "%d", n2);
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				// if (n1 != 7)
				// 	write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
