/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:43:08 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/13 11:50:18 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(src);
	ret = malloc(len + 1);
	if (ret)
		ft_memcpy(ret, src, len + 1);
	return (ret);
}
