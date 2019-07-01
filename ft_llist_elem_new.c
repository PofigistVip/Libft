/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist_elem_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:36:27 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/30 12:36:28 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_llist_elem	*ft_llist_elem_new(void *content, size_t content_size)
{
	t_llist_elem	*elem;

	if ((elem = (t_llist_elem*)malloc(sizeof(t_llist_elem))) == NULL)
		return (NULL);
	if ((elem->content = malloc(content_size)) == NULL)
	{
		free(elem);
		return (NULL);
	}
	ft_memcpy(elem->content, content, content_size);
	elem->prev = NULL;
	elem->next = NULL;
	return (elem);
}
