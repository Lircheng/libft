/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:19:56 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/16 23:56:17 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *st;

	st = (char*)s;
	while (*st)
		st++;
	if (c == '\0')
		return (st);
	while (st != s)
	{
		st--;
		if (*st == (char)c)
			return (st);
	}
	return (0);
}
