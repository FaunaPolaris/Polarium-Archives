#include "archives.h"

char	*str_divineString(const char *str, const char *string)
{
	size_t	strlen;
	size_t	string_len;
	size_t	i, j;

	strlen = str_len(str);
	string_len = str_len(string);
	i = -1;
	while (str[++i] && i <= strlen - string_len)
	{
		j = 0;
		while (str[i + j] == string[j] && j < string_len)
			j++;
		if (!string[j])
			return ((char *)&str[i]);
	}
	return (NULL);
}
