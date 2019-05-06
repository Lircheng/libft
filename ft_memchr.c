/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:01:44 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 06:33:59 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *st;

	st = (unsigned char*)s;
	while (n--)
	{
		if (*st == (unsigned char)c)
			return (st);
		else
			st++;
	}
	return (NULL);
}
