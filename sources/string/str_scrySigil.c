#include "archives.h"

t_bool	str_scrySigil(const char *str, char sgl)
{
	size_t	i;

	i = 0;
	while (str[i])
		if (str[i++] == sgl)
			return ((t_bool)AFFIRMED);
	return ((t_bool)DENIED);
}
