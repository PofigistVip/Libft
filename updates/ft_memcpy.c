#include <string.h>
#include "libft.h"

//прирост к скорости на больших объемах?

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long long	*llptrs[2];
	unsigned long		*lptrs[2];
	unsigned char		*cptrs[2];

	llptrs[0] = (unsigned long long*)dst;
	llptrs[1] = (unsigned long long*)src;
	while (n >= sizeof(long long))
	{
		*(llptrs[0]++) = *(llptrs[1]++);
		n -= sizeof(long long);
	}
	lptrs[0] = (unsigned long*)llptrs[0];
	lptrs[1] = (unsigned long*)llptrs[1];
	while (n >= sizeof(long))
	{
		*(lptrs[0]++) = *(lptrs[1]++);
		n -= sizeof(long);
	}
	cptrs[0] = (unsigned char*)lptrs[0];
	cptrs[1] = (unsigned char*)lptrs[1];
	while (n--)
		*(cptrs[0]++) = *(cptrs[1]++);
	return (dst);
}