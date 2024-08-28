#include "archives.h"

char	*str_mimic(const char *str, size_t	mimic_len)
{
	char	*mimic;
	size_t		i;

	if (str_len(str) < mimic_len)
		return (NULL);
	mimic = calloc(mimic_len + 1, sizeof(char));
	i = -1;
	while (++i < mimic_len)
	{
		mimic[i] = str[i];
	}
	return (mimic);
}
