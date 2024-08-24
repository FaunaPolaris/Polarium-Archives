#include "archives.h"

t_bool	str_scrySigil_oracule(const char *str, char sgl)
{
	size_t	i;

	i = 0;
	printf("Scrying string for Sigil \'%c\'\n", sgl);
	while (str[i])
	{
		if (str[i++] == sgl)
		{
			printf("Affirmed\n");
			return ((t_bool)AFFIRMED);
		}
	}
	printf("Denied\n");
	return ((t_bool)DENIED);
}
