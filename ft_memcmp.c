/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:21:53 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 03:41:25 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *st1;
	unsigned const char *st2;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while (n && *st1 == *st2)
	{
		st1++;
		st2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*st1 - *st2);
}
