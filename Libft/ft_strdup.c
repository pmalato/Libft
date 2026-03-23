/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalato <pmalato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:17:40 by pmalato           #+#    #+#             */
/*   Updated: 2026/03/19 18:28:23 by pmalato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*p1;
	int		i;
	int		len;

	len = 0;
	while (str[len])
		len++;
	p1 = malloc(sizeof(char) * (len + 1));
	if (!p1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p1[i] = str[i];
		i++;
	}
	p1[i] = '\0';
	return ((char *)p1);
}
