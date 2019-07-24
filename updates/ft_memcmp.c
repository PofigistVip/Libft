/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 09:45:34 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/09 08:37:25 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char				*end;
	unsigned long long	*lls[2];
	unsigned char		*cs[2];

	end = (char*)s1 + n - 1;
	lls[0] = (unsigned long long*)s1;
	lls[1] = (unsigned long long*)s2;
	while (lls[0] < end - sizeof(long long))
	{
		if (*(lls[0]) != *(lls[1]))
			break;
		++(lls[0]);
		++(lls[1]);
	}
	cs[0] = (unsigned char*)lls[0];
	cs[1] = (unsigned char*)lls[1];
	while (cs[0] <= end)
	{
		if (*(cs[0]) != *(cs[1]))
			return (*(cs[0]) - *(cs[1]));
		++(cs[0]);
		++(cs[1]);
	}
	return (0);
}
