/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecoelho <pecoelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:14:22 by pecoelho          #+#    #+#             */
/*   Updated: 2026/04/17 16:10:46 by pecoelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_cwords(char const *s, char c)
// {
// 	size_t	words;
// 	size_t	i;

// 	if (!s)
// 		return (0);
// 	words = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i] != c)
// 			words++;
// 		while (s[i] != c)
// 			i++;
// 	}
// 	return (words);
// }

static size_t	ft_wordlen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s)
	{
		if (*s == c)
			return (i);
		i++;
	}
	return (i);
}

static char	*ft_strndup(char const *s, size_t n)
{
	char	*p1;

	if (!s)
		return (NULL);
	p1 = malloc(sizeof(char) * (n + 1));
	if (!p1)
		return (NULL);
	ft_memcpy(p1, s, n);
	p1[n] = '\0';
	return (p1);
}

static void	*free_content(char **p)
{
	char	**res;

	res = p;
	while (*res)
		free(*res++);
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	*start;
	size_t	i;
	size_t	wlen;

	i = 0;
	if (!s)
		return (NULL);
	p = NULL;
	while (s)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		if (*s != c)
		{
			wlen = ft_wordlen(start, c);
			p[i] = ft_strndup(start, wlen);
			if (!p[i])
				free_content(p);
			i++;
			s += wlen;
		}
		s++;
	}
	return (p);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char	sep = av[2][0];
	char	**p1 = ft_split(av[1], sep);
	int		i = 0;
	while (p1[i])
	{
		printf("%s\n", p1[i]);
		i++;
	}
	free_content(p1);
	return (0);
}