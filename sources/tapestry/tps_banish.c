#include "archives.h"

void	tps_banish(char **tapestry)
{
	int	i;

	i = -1;
	while (tapestry[++i])
		free(tapestry[i]);
	free(tapestry);
}
