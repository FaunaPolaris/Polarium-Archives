#include "archives.h"

int	main(int argc, char**argv)
{
	printf("%80s\n", "**");
	printf("Trial by Fire - 0.1\n");
	printf("Tester Program for the Meta Archives\n");
	if (argc == 1)
	{
		printf("Please insert one or more strings\n");
		return (0);
	}
	printf("..Oracule - 0.0.1\n");
	for (int i = 1; argv[i]; i++)
	{
		printf("%80s\n", "**");
		printf("-Oracule String-\n");
		printf("%s\n", argv[i]);
		printf("%80s\n", "**");
		str_len_oracule(argv[i]);
		str_scrySigil_oracule(argv[i], 'F');
		str_scryString_oracule(argv[i], "Fauna");
		printf("%80s\n", "**");
	}
}
