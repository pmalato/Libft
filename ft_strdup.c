/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecoelho <pecoelho@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:57:46 by pecoelho          #+#    #+#             */
/*   Updated: 2026/03/27 09:57:47 by pecoelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*p1;
	size_t		len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	p1 = malloc(len + 1);
	if (!p1)
		return (NULL);
	ft_memcpy(p1, str, len);
	p1[len] = '\0';
	return (p1);
}
