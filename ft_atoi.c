/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:31:00 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 18:47:33 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	unsigned long	n;

	i = 1;
	while (ft_whitespace(*str) == 1)
		str++;
	if (*str == '-')
		i = -1;
	if (*str == '-' || *str == '+')
		str++;
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + ((*str++) - '0');
		if (n != (n * 10) / 10)
			return ((i == 1) ? -1 : 0);
	}
	return ((int)n * i);
}
