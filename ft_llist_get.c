/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:47:27 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/30 12:47:29 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

//Сдвигаться с конца если индекс ближе к концу
void	*ft_llist_get(t_llist *llist, size_t index)
{
	t_llist_elem	*elem;

	if (llist->count == 0 || llist->count - 1 < index)
		return (NULL);
	elem = llist->start;
	while (index-- > 0)
		elem = elem->next;
	return (elem->content);
}
