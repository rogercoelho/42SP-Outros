/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:57:30 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/03 20:31:10 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	change;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <=90)
		{
			change = str[i] +32;
			str[i] = change;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char teste[50] = "testeTESTE";

	ft_strlowcase(teste);
printf ("%s", teste);
}
