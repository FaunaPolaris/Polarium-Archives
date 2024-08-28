#include "archives.h"

char	*str_divineSigil(const char *str, char sigil)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == sigil)
			return ((char *)&str[i]);
	}
	return (NULL);
}
