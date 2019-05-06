/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:05:13 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 19:13:55 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	size_t	nb;
	size_t	t;
	char	*ss;
	size_t	i;

	i = 0;
	t = ft_countsim(n);
	ss = ft_strnew(ft_countsim(n));
	if (ss == NULL)
		return (NULL);
	if (n < 0)
	{
		ss[0] = '-';
		nb = (size_t)n * -1;
		i = 1;
	}
	else
		nb = (size_t)n;
	while (t-- > i)
	{
		ss[t] = (nb % 10) + '0';
		nb /= 10;
	}
	return (ss);
}
