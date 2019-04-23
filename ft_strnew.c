/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmistie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:33:06 by rmistie           #+#    #+#             */
/*   Updated: 2019/04/23 18:38:56 by rmistie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char*)malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size + 1);
	return (s);
}
