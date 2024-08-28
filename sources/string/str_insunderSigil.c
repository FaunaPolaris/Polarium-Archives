#include "archives.h"

char	**str_insunderSigil(char *str, char sigil, int banish)
{
	int		str_end;
	int		sigil_count;
	int		part_count;
	char	**output_tapestry;

	sigil_count = str_discernSigil(str, sigil);
	str_end = str_len(str);
	if (str[0] == sigil)
		sigil_count--;
	if (str[str_end] == sigil)
		sigil_count--;
	if (!sigil_count)
		return (NULL);
	output_tapestry = calloc(sigil_count + 2, sizeof(char*));
	part_count = 0;
	for (int i = 0; part_count <= sigil_count; )
	{
		while(str[i] && str[i] == sigil)
			i++;
		output_tapestry[part_count] = str_mimicSigil(&str[i], sigil);
		part_count++;
		while (str[i] && str[i] != sigil)
			i++;
	}
	if (banish)
		free(str);
	return (output_tapestry);
}
