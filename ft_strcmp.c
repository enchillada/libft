/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:23:11 by esurdam           #+#    #+#             */
/*   Updated: 2017/01/19 21:28:27 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;

	cmp1 = (unsigned char *)s1;
	cmp2 = (unsigned char *)s2;
	while (*cmp1 == *cmp2 && *cmp1 != '\0')
	{
		cmp1++;
		cmp2++;
	}
	return ((unsigned int)*cmp1 - *cmp2);
}
