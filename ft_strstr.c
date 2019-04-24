/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:39:50 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 03:49:54 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	c;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char*)&haystack[i]);
	while (haystack[i] && needle[j])
	{
		c = i;
		j = 0;
		while (haystack[c] == needle[j] && needle[j])
		{
			j++;
			c++;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
