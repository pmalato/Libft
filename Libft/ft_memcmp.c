/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalato <pmalato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:55:00 by pmalato           #+#    #+#             */
/*   Updated: 2026/03/23 12:13:06 by pmalato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*s;
	size_t				i;

	p = (const unsigned char *)s1;
	s = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != s[i])
			return (p[i] - s[i]);
		i++;
	}
	return (0);
}
