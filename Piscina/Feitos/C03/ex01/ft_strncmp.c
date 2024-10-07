/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:40:32 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/03 19:52:50 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char				*str_1;
	char				*str_2;
	unsigned int		limit;

	str_1 = "A";
	str_2 = "";
	limit = 10;
	ft_strncmp(str_1, str_2, limit);
	printf ("%i\n", str_1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == NULL)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}
