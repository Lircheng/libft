/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 18:13:40 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 18:25:46 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		wlen(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	size_t		start(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static	void		clstr(char **s, size_t l)
{
	size_t i;

	i = -1;
	while (l > i)
	{
		ft_strdel(&s[i]);
		i++;
	}
	ft_strdel(s);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**ss;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = (ft_countwords(s, c));
	ss = (char**)malloc(sizeof(char*) * i + 1);
	if (ss == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		s += start(s, c);
		ss[j] = ft_strsub(s, 0, wlen(s, c));
		if (ss[j] == NULL)
		{
			clstr(ss, i);
			return (NULL);
		}
		j++;
		s += wlen(s, c);
	}
	ss[j] = 0;
	return (ss);
}
