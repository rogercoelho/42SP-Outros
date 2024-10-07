/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 07:26:30 by rreal-de          #+#    #+#             */
/*   Updated: 2024/09/02 09:48:43 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	get_dest_lenght_size(char *str, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0' && len < size)
	{
		len++;
	}
	return (len);
}

unsigned int	get_src_lenght(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	src_len = 0;
	i = 0;
	j = 0;
	dest_len = get_dest_lenght_size(dest, size);
	src_len = get_src_lenght(src);
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	i = dest_len;
	while (src[j] != '\0' && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char			dest_text[100] = "hello all";
// 	char			src_text[] = "world";
// 	unsigned int	size_of;
// 	unsigned int	result;

// 	size_of = sizeof(dest_text);
// 	result = ft_strlcat(dest_text, src_text, size_of);
// 	printf("%s\n", dest_text);
// 	printf("%d\n", result);
// }
