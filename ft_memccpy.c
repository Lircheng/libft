/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:49:34 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/23 18:56:24 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *sr;
	char *ds;

	sr = (char*)src;
	ds = (char*)dst;
	while (n--)
	{
		*ds++ = *sr++;
		if (*sr == ((char)c))
		{
			*ds++ = *sr++;
			return (ds);
		}
	}
	return (0);
}
