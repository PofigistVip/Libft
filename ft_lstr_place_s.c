
#include <string.h>
#include "libft.h"

void	ft_lstr_place_s(t_lstr *lstr, char *str, int index)
{
	int		len;

	if (lstr == NULL || str == NULL || index < 0 || index > lstr->length)
		return ;
	len = (int)ft_strlen(str);
	if (len == 0)
		return ;
	if (index + len >= lstr->capacity)
	{
		if (ft_lstr_resize(lstr, lstr->length - index + len)  == 0)
			return ;
		lstr->length = index + len;
	}
	ft_memmove(lstr->str + index, str, len);
}
