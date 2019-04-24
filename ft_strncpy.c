/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:41:22 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 03:39:17 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t j;

	j = 0;
	if (len == 0)
		return (dst);
	while (src[j] && len > j)
	{
		dst[j] = src[j];
		j++;
	}
	while (len > j)
	{
		dst[j] = 0;
		j++;
	}
	return (dst);
}
