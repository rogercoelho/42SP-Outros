/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:52:07 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/02 03:32:25 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char	*str_1;
// 	char	*str_2;
// 	int		return_value;

// 	str_1 = "teste de copia";
// 	str_2 = "teste de copia!";
// 	printf("Valor da string 1 --> %s\n", str_1);
// 	printf("Valor da string 2 --> %s\n", str_2);
// 	return_value = ft_strcmp(str_1, str_2);
// 	printf("%d\n", return_value);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
