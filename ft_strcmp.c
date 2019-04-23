/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:16:36 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/20 17:09:04 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *st1;
	unsigned char *st2;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while (*st1 == *st2 && *st1)
	{
		st1++;
		st2++;
	}
	return (*st1 - *st2);
}
