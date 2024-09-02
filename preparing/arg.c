#include <unistd.h>

void	_putchar(char c)
{
	write (1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (av[1][i] == '-')
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			av[1][i + 1] -= 32;
			_putchar(av[1][i++]);
		}
		i++;
	}
	_putchar('\n');
}

