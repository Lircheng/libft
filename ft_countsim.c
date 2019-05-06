/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countsim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:07:37 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 19:12:24 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countsim(int n)
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
