/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 15:32:19 by esurdam           #+#    #+#             */
/*   Updated: 2017/01/18 10:14:15 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_itoa(int i)
{
	char	*p;
	long	i_cpy;
	int		len;
	int		flg_neg;

	flg_neg = 0;
	if (i < 0)
		flg_neg = 1;
	len = ft_intlen(i);
	i_cpy = i;
	i_cpy = flg_neg ? -i_cpy : i_cpy;
	if (!(p = ft_strnew(len)))
		return (0);
	p[len] = 0;
	while (--len)
	{
		p[len] = i_cpy % 10 + 48;
		i_cpy /= 10;
	}
	p[len] = flg_neg == 1 ? '-' : i_cpy % 10 + 48;
	return (p);
}
