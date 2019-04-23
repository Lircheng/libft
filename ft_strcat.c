/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:58:41 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/20 21:14:40 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while (*st1)
		st1++;
	while (*st2)
	{
		*st1++ = *st2++;
	}
	*st1 = '\0';
	return (s1);
}
