/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:20:53 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/05 17:26:56 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

int	ft_atoi(char *str)
{
	int	i;
	int	posneg;
	int	number;

	i = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	posneg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			posneg *= -1;
		i++;
	}
	number = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	return (number * posneg);
}

/* int	main(void)
{
	char str1[] = "   ---+--+1234ab567";
	char str2[] = "   +456";
	char str3[] = "   -4245";
	char str4[] = "   98765";

	printf("String: '%s' -> Número: %d\n", str1, ft_atoi(str1));
	printf("String: '%s' -> Número: %d\n", str2, ft_atoi(str2));
	printf("String: '%s' -> Número: %d\n", str3, ft_atoi(str3));
	printf("String: '%s' -> Número: %d\n", str4, ft_atoi(str4));

	return (0);
} */
