/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:49:34 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 02:40:06 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *sr;
	unsigned char *ds;

	sr = (unsigned char*)src;
	ds = (unsigned char*)dst;
	while (n--)
	{
		if (*sr == (unsigned char)c)
		{
			*ds++ = *sr++;
			return (ds);
		}
		*ds++ = *sr++;
	}
	return (NULL);
}
