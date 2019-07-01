/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:08:28 by larlyne           #+#    #+#             */
/*   Updated: 2019/05/02 12:08:34 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_llist_clear(t_llist *llist, void (*cont_destroy)(void*))
{
	if (llist == NULL || cont_destroy == NULL)
		return ;
	while (llist->count > 0)
		ft_llist_remove(llist, 0, cont_destroy);
}
