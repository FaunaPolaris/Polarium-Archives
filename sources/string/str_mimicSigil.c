#include "archives.h"

char	*str_mimicSigil(const char *str, char sigil)
{
	char	*mimic;
	size_t	mimic_len;
	size_t		i;

	i = -1;
	mimic_len = 0;
	printf("string to mimic: %s\n", str);
	while (str[++i] && str[i] != sigil)
		mimic_len++;
	mimic = calloc(mimic_len + 1, sizeof(char));
	i = -1;
	while (str[++i] && str[i] != sigil)
		mimic[i] = str[i];
	return (mimic);
}
