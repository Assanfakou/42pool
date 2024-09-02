


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
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '-')
			i++;
		while  (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '-')
		{	
				_putchar(av[1][i]);
				i++;
		}
	}
	_putchar('\n');
}
