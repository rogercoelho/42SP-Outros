/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:32:22 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/24 17:53:51 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* change[2] = *argv[2] - 48;*/

#include <stdio.h>
#include <stdlib.h>

int	*convert(int count, char *value[])
	{
	int	*change;
	int	pos;

	change = malloc(count * sizeof(int));

	pos = 0;

	if (change == NULL)
	{
		printf("Erro ao alocar memória.\n");
		exit(1);
	}

	while (pos < count)
	{
		change[pos] = value[pos] - '0';
		pos++;
	}

	return (change);
}

int	main(int argc, char *argv[])
{
	int	*numbers;

	argc = 2;
	argv[0] = "1";

	if (argc < 2)
	{
		printf("Uso: %s <numeros...>\n", argv[0]);
		return (1);
	}

	numbers = convert(argc, argv);

	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);

	return (0);
}
