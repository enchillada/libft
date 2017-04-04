/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:58:28 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/16 19:58:15 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t n;

	if (!*l)
		return ((char*)b);
	n = ft_strlen(l);
	while (*b && len-- >= n)
	{
		if (*b == *l && !ft_memcmp(b, l, n))
			return ((char*)b);
		b++;
	}
	return (0);
}
