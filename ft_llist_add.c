/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:45:29 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/30 11:46:17 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_llist_add(t_llist *llist, void *content)
{
	t_llist_elem	*elem;

	if (llist == NULL || content == NULL)
		return (0);
	if ((elem = ft_llist_elem_new(content, llist->content_size)) == NULL)
		return (0);
	if (llist->start == NULL)
	{
		llist->start = elem;
		llist->end = elem;
	}
	else
	{
		llist->end->next = elem;
		elem->prev = llist->end;
		llist->end = elem;
	}
	++llist->count;
	return (1);
}
