#include "archives.h"

size_t	str_len_oracule(const char *str)
{
	size_t	output;

	printf("Counting len of string\n");
	output = 0;
	while (str[++output])
		;
	printf("lenght defined to be %li\n", output);
	return (output);
}
