/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:26:39 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/24 18:47:20 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_whitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' ||
			c == '\r' || c == '\f')
		return (1);
	return (0);
}
