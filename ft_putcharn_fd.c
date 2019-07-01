#include <unistd.h>
#include "libft.h"

int		ft_putcharn_fd(int fd, char c, int n)
{
	int i;

	if (n < 0)
		return (0);
	i = n;
	while (i-- > 0)
		write(fd, &c, 1);
	return (n);
}