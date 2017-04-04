/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 14:53:51 by esurdam           #+#    #+#             */
/*   Updated: 2017/02/02 17:47:44 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *current;

	current = begin_list;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
