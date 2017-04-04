/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:47:56 by esurdam           #+#    #+#             */
/*   Updated: 2017/01/19 22:55:09 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *sub;

	if (!s)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (start-- > 0)
		s++;
	ft_memcpy(sub, s, len);
	sub[len] = '\0';
	return (sub);
}
