/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlyne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:28:53 by larlyne           #+#    #+#             */
/*   Updated: 2019/04/14 09:55:01 by larlyne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

//В оргигинале long, int, char. long и int равны!

void	ft_bzero(void *s, size_t n)
{
	unsigned long long *llblock;
	unsigned long		*lblock;
	unsigned short		*sblock;
	unsigned char		*cblock;

	llblock = (unsigned long long*)s;
	while (n >= sizeof(long long) && (n -= sizeof(long long)) >= 0)
		*llblock++ = 0;
	lblock = (unsigned long*)llblock;
	while (n >= sizeof(long))
	{
		*lblock++ = 0;
		n -= sizeof(long);
	}
	sblock = (unsigned short*)lblock;
	while (n >= sizeof(short))
	{
		*sblock++ = 0;
		n -= sizeof(short);
	}
	cblock = (unsigned char*)sblock;
	while (n--)
		*cblock++ = 0;
}
