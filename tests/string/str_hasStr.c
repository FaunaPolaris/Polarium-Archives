#include "archives.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Welcome to str_hasStr tester, to use:\n");
		printf("./str_hasStr [str to search] [str to find]\n");
		return (0);
	}
	if (str_hasStr(argv[1], argv[2]))
		printf("\"%s\" is a substring of: \"%s\"\n", argv[2], argv[1]);
	else
		printf("\"%s\" is not a substring of: \"%s\"\n", argv[2], argv[1]);
	return (1);
}
