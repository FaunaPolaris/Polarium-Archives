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
		char	*str = str_clone(argv[i]);
		printf("clone: %s\n", str);
		free(str);
		str = str_mimic(argv[i], 3);
		printf("mimic: %s\n", str);
		free(str);
		str = str_mimicSigil(argv[i], '|');
		printf("mimicSigil: %s\n", str);
		free(str);
		char	**tapestry;
		tapestry = str_sunderSigil(argv[i], '|', 0);
		printf("sundered at \'|\'\n", str);
		if (tapestry)
		{
			for (int j = 0; tapestry[j]; j++)
				printf("- %s -", tapestry[j]);
			tps_banish(tapestry);
			printf("\n");
		}
		else
			printf("no tapestry created\n");
		tapestry = str_insunderSigil(argv[i], '|', 0);
		printf("isundered at \'|\'\n", str);
		if (tapestry)
		{
			for (int j = -1; tapestry[++j];)
				printf("- %s -", tapestry[j]);
			tps_banish(tapestry);
			printf("\n");
	}
	else
		printf("no tapestry created\n");
		printf("%80s\n", "**");
	}
}
