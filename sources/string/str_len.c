#include "archives.h"

size_t	str_len(const char *str)
{
	size_t	output;

	output = 0;
	while (str[++output])
		;
	return (output);
}
