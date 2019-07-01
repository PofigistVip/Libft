/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:39:11 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/30 11:39:13 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_llist		*ft_llist_create(size_t content_size)
{
	t_llist	*llist;

	if (content_size == 0)
		return (NULL);
	if ((llist = (t_llist*)malloc(sizeof(t_llist))) == NULL)
		return (NULL);
	llist->content_size = content_size;
	llist->count = 0;
	llist->start = NULL;
	llist->end = NULL;
	return (llist);
}
