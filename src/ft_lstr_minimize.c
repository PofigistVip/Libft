
#include <string.h>
#include "libft.h"

void	ft_lstr_minimize(t_lstr *lstr)
{
	if (lstr == NULL)
		return ;
	if (lstr->length + 1 < lstr->capacity)
		ft_lstr_resize(lstr, lstr->length);
}
