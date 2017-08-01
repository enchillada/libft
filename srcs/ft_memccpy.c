/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:14:05 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/13 11:34:38 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*d;
	const char				*s;
	unsigned char			x;
	size_t					i;

	d = dst;
	s = src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*d++ = *s++) == x)
			return (d);
		i++;
	}
	return (NULL);
}
