
#include <string.h>
#include "libft.h"

void	ft_lstr_place_sn(t_lstr *lstr, char *str, int len, int index)
{
	int		str_len;

	if (lstr == NULL || str == NULL || index < 0 ||
	index > lstr->length || len == 0)
		return ;
	str_len = (int)ft_strlen(str);
	if (str_len == 0)
		return ;
	if (str_len < len)
		len = str_len;
	if (index + len >= lstr->capacity)
	{
		if (ft_lstr_resize(lstr, lstr->length - index + len)  == 0)
			return ;
		lstr->length = index + len;
	}
	ft_memmove(lstr->str + index, str, len);
}
