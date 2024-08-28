#include "archives.h"

char	*str_clone(const char *str)
{
	size_t	i;
	char	*clone;
	size_t	strlen;

	strlen = str_len(str);
	if (!strlen)
		return (NULL);
	clone = calloc(strlen + 1, sizeof(char));
	i = -1;
	while (++i < strlen)
	{
		clone[i] = str[i];
	}
	return(clone);
}
