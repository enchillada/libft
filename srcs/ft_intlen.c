/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 15:23:14 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/19 20:08:48 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_intlen(int value)
{
	int len;
	int v;

	v = value;
	len = !value;
	while (value)
	{
		len++;
		value /= 10;
	}
	if (v < 0)
		return (len + 1);
	return (len);
}
