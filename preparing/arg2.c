


#include <unistd.h>

void	_putchar(char c)
{
	write (1, &c, 1);
}

void 	_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}



int main (int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i] > 0)
	{
		_putstr(av[i]);
		_putchar('\n');
		i++;
	}
}

