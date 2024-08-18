#include "archives.h"

t_bool	str_hasChar(const char *str, char to_find)
{
	size_t	i;

	i = 0;
	while (str[i])
		if (str[i++] == to_find)
			return ((t_bool)TRUE);
	return ((t_bool)FALSE);
}
