/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:26:17 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/02 17:22:05 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr_return;

	ptr_return = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr_return);
}

int	main(void)
{
	char	dest[100] = "Lello ";
	char	src[7] = "Coelho";

	char	*result = ft_strcat(dest, src);
	printf("String %s\n", result);

	return (0);
}
