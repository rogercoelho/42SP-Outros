/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:01:02 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/28 19:23:56 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
