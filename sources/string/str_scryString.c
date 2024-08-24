#include "archives.h"

t_bool	str_scryString(const char *str, const char *string)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (str[++i])
	{
		if (str[i] == string[0])
		{
			if (str_len(str) - i < str_len(string))
				break ;
			j = -1;
			while (string[++j])
			{
				if (string[j] != str[i + j])
					break ;
			}
			if (!string[j])
				return (AFFIRMED);
		}
	}
	return (DENIED);
}
