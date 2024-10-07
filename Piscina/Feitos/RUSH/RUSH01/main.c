/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:33:00 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/25 03:36:40 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define SIZE 6


void	start_matrix(int matrix[SIZE][SIZE], int *convert_input)
{
	int	i;
	int	ii;

	i = 0;
	while (i < SIZE)
	{
		ii = 0;
		while (ii < SIZE)
		{
			if (ii == 0)
			{
				matrix[ii][i] = convert_input[i];
			}
			else
			{
				matrix[ii][i] = 0;
			}
			ii++;
		}
		i++;
	}
}

void	show_matrix(int matrix[SIZE][SIZE])
{
	int	i;
	int	ii;

	i = 0;
	while (i < SIZE)
	{
		ii = 0;
		while (ii < SIZE)
		{
			printf("%d\t", matrix[i][ii]);
			ii++;
		}
		printf("\n");
		i++;
	}
}

int	string_to_int(char *str)
{
	int	converted;
	int	i;

	converted = 0;
	i = 0;
	while (str[i] != '\0')
	{
		converted = converted * 10 + (str[i] - '0');
		i++;
	}

	return (converted);
}

int	argv_arguments(int argc, char *argv[], int *convert_input, int matrix_size)
{
	int	i;

	i = 0;
	if (argc != matrix_size + 1)
	{
		printf("Valor %s deve ser preenchido de valor1 a 16\n", argv[0]);
		return (1);
	}

	while (i < matrix_size)
	{
		convert_input[i] = string_to_int(argv[i + 1]);
		i++;
	}

	return (0);
}

int	main(int argc, char *argv[])
{
	int	matrix_size;
	int	convert_input[SIZE];
	int	matrix[SIZE][SIZE];

	matrix_size = SIZE;
	if (argv_arguments(argc, argv, convert_input, matrix_size) != 0)
	{
		return (1);
	}

	start_matrix(matrix, convert_input);
	show_matrix(matrix);

	return (0);
}
