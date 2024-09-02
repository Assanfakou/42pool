

#include <unistd.h>
void _putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;

	if (ac == 4)
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][i])
				_putchar(av[4][0]);
			i++;
		}
	}
	else
		_putchar('\n');

}
