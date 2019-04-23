/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 00:32:18 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/23 18:10:16 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*sc;
	char	*ds;

	if (!dst && !src)
		return (0);
	ds = (char*)dst;
	sc = (char*)src;
	while (n--)
		*ds++ = *sc++;
	return (dst);
}
