/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalato <pmalato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:04:58 by pmalato           #+#    #+#             */
/*   Updated: 2026/03/23 13:38:47 by pmalato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p1;
	size_t	msize;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	msize = nmemb * size;
	p1 = malloc(msize);
	if (!p1)
		return (NULL);
	ft_memset(p1, 0, msize)
	return (p1);
}
