/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalato <pmalato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:48:01 by pmalato           #+#    #+#             */
/*   Updated: 2026/03/18 10:55:20 by pmalato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_h"

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int    j;

	if (size > 0)
	{
		j = 0;
		while (src[j] && j < size - 1)
		{
			dest[j] == src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (ft_strlen(src));
}
