/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 22:58:09 by esurdam           #+#    #+#             */
/*   Updated: 2017/01/19 21:31:35 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;

	cmp1 = (unsigned char *)s1;
	cmp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*cmp1 == *cmp2 && *cmp1 != '\0' && n > 1)
	{
		cmp1++;
		cmp2++;
		n--;
	}
	return ((unsigned int)*cmp1 - *cmp2);
}
