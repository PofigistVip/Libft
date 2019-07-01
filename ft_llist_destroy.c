/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:53:53 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/30 12:53:56 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_llist_destroy(t_llist **llist, void (*cont_destroy)(void*))
{
	t_llist_elem	*elem;
	t_llist_elem	*temp;

	if (llist == NULL || *llist == NULL || cont_destroy == NULL)
		return ;
	elem = (*llist)->start;
	while (elem)
	{
		temp = elem->next;
		cont_destroy(elem->content);
		free(elem);
		elem = temp;
	}
	free(*llist);
	*llist = NULL;
}
