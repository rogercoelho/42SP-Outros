/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 03:31:06 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/02 13:55:22 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_inside;
	char	*to_find_inside;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		str_inside = str;
		to_find_inside = to_find;
		while (*to_find_inside && *str_inside == *to_find_inside)
		{
			str_inside++;
			to_find_inside++;
		}
		if (*to_find_inside == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Teste de comparacao de valor";
// 	char	to_find[] = "compapa";
// 	char	*result;

// 	result = ft_strstr(str, to_find);
// 	if (result)
// 	{
// 		printf("Substring encontrada: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Substring não encontrada.\n");
// 	}
// 	return (0);
//}
