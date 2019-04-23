/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:51:26 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/20 17:22:46 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *st1;
	unsigned char *st2;

	if (n == 0)
		return (0);
	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while (*st1 == *st2 && *st1 && n-- > 1)
	{
		st1++;
		st2++;
	}
	return (*st1 - *st2);
}
