/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:05:13 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/23 19:19:10 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ctnbr(int n)
{
	size_t i;
	size_t d;

	d = 0;
	i = 1;
	if (n < 0)
	{
		d = (size_t)n * -1;
		i = 2;
	}
	else
		d = (size_t)n;
	while (d >= 10)
	{
		d /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	size_t	nb;
	size_t	t;
	char	*ss;
	size_t	i;

	i = 0;
	t = ctnbr(n);
	ss = ft_strnew(ctnbr(n));
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
