/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:52:23 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/04 14:04:27 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char			str_1_dest[100] = "Lello ";
	char			str_2_src[12] = "Coelho!";
	unsigned int	size;

	size = 3;
	ft_strncat(str_1_dest, str_2_src, size);
	printf("String: %s\n", str_1_dest);
	return (0);
}
