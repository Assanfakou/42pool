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

void skip(char *str)
{
	int i;
	int l;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i > 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
			break;
			i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
			_putchar(str[i]);
			i++;
	}
}
int main (int ac, char **av)
{
	int i;
	if (ac == 2)
		skip(av[1]);
	_putchar('\n');
}
