/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:27:33 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/23 19:05:46 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ds;
	unsigned char *sc;

	if (!dst && !src)
		return (0);
	ds = (unsigned char*)dst;
	sc = (unsigned char*)src;
	if (ds > sc)
		while (len--)
			ds[len] = sc[len];
	else
		while (len--)
			*ds++ = *sc++;
	return (dst);
}
