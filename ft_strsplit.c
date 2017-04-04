/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 15:56:40 by esurdam           #+#    #+#             */
/*   Updated: 2017/01/14 03:42:02 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;

	i = 0;
	while (!s || !c)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(char *) * ft_findwordc(s, c))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			ret[i] = (char *)malloc(sizeof(char) * ((ft_wordlen(s, c) + 1)));
			while (ft_wordlen(s, c) > 0)
				ret[i][j++] = *s++;
			ret[i][j] = '\0';
			i++;
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}
