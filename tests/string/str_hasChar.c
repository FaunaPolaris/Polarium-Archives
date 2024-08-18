#include "archives.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Welcome to str_hasChar tester, to use:\n");
		printf("./test [str_to_check] [char to look for]");
		return (1);
	}
	if (str_hasChar(argv[1], argv[2][0]))
		printf("%s has %c\n",argv[1], argv[2][0]);
	else
		printf("%s does not have %c\n", argv[1], argv[2][0]);
	return (0);
}
