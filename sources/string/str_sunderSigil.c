#include "archives.h"

char	**str_sunderSigil(char *str, char sigil, int banish)
{
	int		i;
	char	**tapestry;

	if (!str_scrySigil(str, sigil))
		return (NULL);
	i = -1;
	while (str[++i] == sigil)
		;
	while (str[i++] != sigil)
		;
	if (!str)
		return (NULL);
	tapestry = calloc(3, sizeof(char*));
	tapestry[0] = str_mimic(str, i - 1);
	tapestry[1] = str_clone(&str[i]);
	if (banish)
		free(str);
	return (tapestry);
}
