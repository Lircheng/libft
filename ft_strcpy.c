/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:38:18 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 03:38:40 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}