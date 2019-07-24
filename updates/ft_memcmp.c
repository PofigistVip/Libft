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
	unsigned long long	*lls1;
	unsigned long long	*lls2;
	unsigned char		*cs[2];

	end = (char*)s1 + n;
	lls1 = (unsigned long long*)s1;
	lls2 = (unsigned long long*)s2;
	while (lls1 + sizeof(long long) < end)
	{
		if (*lls1 != *lls2)
			break;
		++lls1;
		++lls2;
	}
	cs[0] = (unsigned char*)lls1;
	cs[1] = (unsigned char*)lls2;
	while (cs[0] != end)
	{
		if (*(cs[0]) != *(cs[1]))
			return (*(cs[0]) - *(cs[1]));
		++(cs[0]);
		++(cs[1]);
	}
	return (0);
}
