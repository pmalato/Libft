/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecoelho <pecoelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:14:22 by pecoelho          #+#    #+#             */
/*   Updated: 2026/04/16 21:44:20 by pecoelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cwords(char const *s, char c)
{
	size_t	words;

	if (!s)
		return (0);
	if (!c)
		return (1);
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

static void	*free_content(char **p)
{
	char	**res;

	res = p;
	while (*res)
		free(*res++);
	free(p);
	return (NULL);
}

static char	**split_helper(char **res, char const *s, char c)
{
	char		**p;
	char const	*start;

	p = res;
	if (!c)
	{
		res[0] = ft_strdup(s);
		return (res);
	}
	while (1)
	{
		while (*s == c)
			s++;
		if (!*s)
			return (p);
		start = s;
		while (*s && *s != c)
			s++;
		*res = ft_substr(start, 0, s - start);
		if (!*res)
			return (free_content(p));
		res++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (NULL);
	p = ft_calloc(ft_cwords(s, c) + 1, sizeof(char *));
	if (!p)
		return (NULL);
	return (split_helper(p, s, c));
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (1);
// 	char	sep = av[2][0];
// 	char	**p1 = ft_split(av[1], sep);
// 	int		i = 0;
// 	while (p1[i])
// 	{
// 		printf("%s\n", p1[i]);
// 		i++;
// 	}
// 	free_content(p1);
// 	return (0);
// }