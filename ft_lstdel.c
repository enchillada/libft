/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:40:30 by esurdam           #+#    #+#             */
/*   Updated: 2017/01/19 13:44:49 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *lnk;

	current = *alst;
	while (current)
	{
		lnk = current->next;
		del(current, current->content_size);
		current = lnk;
	}
	*alst = NULL;
}
