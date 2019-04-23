/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 00:12:05 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/23 20:05:51 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ss;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (!s)
		return (0);
	j = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j--;
	while ((j >= 0) && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	if (j < i)
		j = i;
	if (!(ss = ft_strnew(j - i + 1)))
		return (NULL);
	while (i + k - 1 < j)
	{
		ss[k] = s[i + k];
		k++;
	}
	return (ss);
}
