#include "archives.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Welcome to str_len tester, to use:\n");
		printf("./test [string to count]\n");
	}
	else
		printf("lenght of:  %-5s is : %-15i\n", argv[1], str_len(argv[1]));
	return (0);
}
