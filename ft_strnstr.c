/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:41:00 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/17 21:50:47 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;
	unsigned long	c;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char*)&haystack[i]);
	while (haystack[i] && needle[j] && len > i)
	{
		c = i;
		j = 0;
		while (haystack[c] == needle[j] && needle[j] && len > c)
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
