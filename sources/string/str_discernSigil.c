#include "archives.h"

int	str_discernSigil(char *str, char  sigil)
{
	int i;
	int	tally;
	int	unique;

	i = -1;
	tally = 0;
	unique = 1;
	while (str[++i])
	{
		if (unique && str[i] == sigil)
		{
			unique = 0;
			tally++;
		}
		if (!unique && str[i] != sigil)
			unique = 1;
	}
	return (tally);
}
