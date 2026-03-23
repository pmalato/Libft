/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalato <pmalato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:02:22 by pmalato           #+#    #+#             */
/*   Updated: 2026/03/17 15:40:56 by pmalato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*seen;

	seen = NULL;
	while (*s)
	{
		if (*s == (char)c)
			seen = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (seen);
}
