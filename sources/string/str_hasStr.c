#include "archives.h"

t_bool	str_hasStr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{
			if (str_len(str) - i < str_len(to_find))
				break ;
			j = -1;
			while (to_find[++j])
			{
				if (to_find[j] != str[i + j])
					break ;
			}
			if (!to_find[j])
				return (TRUE);
		}
	}
	return (FALSE);
}
