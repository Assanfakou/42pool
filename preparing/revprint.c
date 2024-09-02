





#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int l;

	l = argc - 1;

	while (l)
	{
		i = 0;
		while (argv[l][i])
		{
			write (1, &argv[l][i], 1);
			i++;
		}
		l--;
	}
	write (1, "\n",1);
}

