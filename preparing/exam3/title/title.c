




#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][0] >= 'a' && argv[1][0] <= 'z')
					argv[1][0] -= 32;
			if (argv[1][i] == ' ' && (argv[1][i + 1] >= 'a' && argv[1][i] <= 'z'))
					argv[1][i + 1] -= 32;
				write (1, &argv[1][i], 1);
			i++;
		}
	}
}
