/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecoelho <pecoelho@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:14:22 by pecoelho          #+#    #+#             */
/*   Updated: 2026/04/05 08:21:15 by pecoelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char const *s, size_t n)
{
	char	*p;

	p = malloc(n + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s, n);
	p[n] = '\0';
	return (p);
}

static size_t	ft_cwords(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	words;
	size_t	i;
	size_t	j;

	words = ft_cwords(s, c);
	p = malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		j = 0;
		if (*s)
		{
			while (s[j] != c && s[j])
				j++;
			p[i++] = ft_strndup(s, j);
		}
		s += j;
	}
	p[words] = NULL;
	return (p);
}
