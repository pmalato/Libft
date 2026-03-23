/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalato <pmalato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:06:46 by pmalato           #+#    #+#             */
/*   Updated: 2026/03/18 10:55:14 by pmalato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	if (i == size)
		return (ft_strlen(src) + size);
	j = 0;
	while (src[j] && (i + j) < (size - 1))
	{
		dest[i + j] == src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + i);
}
