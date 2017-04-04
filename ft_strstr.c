/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:25:21 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/15 15:11:59 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	c;
	size_t	n;

	c = *little;
	if (!c)
		return (char*)big;
	n = ft_strlen(little);
	while (*big)
		if (!ft_memcmp(big++, little, n))
			return ((char*)big - 1);
	return (0);
}
