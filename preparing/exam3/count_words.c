

int count_words(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			count++;
		if (str[i] != ' ' && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int main ()
{
	char st[] =  "     deej p[f[ p[lepfe p[lefp[ e[ef[pe ef[le ef[lef epf     pkr[kefe     ";
	printf("%d\n", count_words(st));
}*/

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			count_words(&argv[1][i]);
			i++;
		}
	}

}
