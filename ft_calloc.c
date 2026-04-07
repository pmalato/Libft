/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecoelho <pecoelho@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:56:07 by pecoelho          #+#    #+#             */
/*   Updated: 2026/04/01 12:51:21 by pecoelho         ###   ########.fr       */
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
	ft_memset(p1, 0, msize);
	return (p1);
}
