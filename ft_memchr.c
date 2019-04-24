/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:01:44 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 04:54:25 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *st;
	
	if (!s)
		return (0);
	st = (unsigned char*)s;
	while (n-- > 1 && *st != ((unsigned char)c))
		st++;
	if (*st == ((unsigned char)c))
		return (st);
	return (0);
}
