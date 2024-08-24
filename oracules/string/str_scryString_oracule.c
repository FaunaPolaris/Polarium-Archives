#include "archives.h"

t_bool	str_scryString_oracule(const char *str, const char *string)
{
	size_t	i;
	size_t	j;

	i = -1;
	printf("Scrying string for substring\n");
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
			{
				printf("Affirmed\n");
				return (AFFIRMED);
			}
		}
	}
	printf("Denied");
	return (DENIED);
}
