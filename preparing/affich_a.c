

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
	int j;

	j = 1;
	if (ac == 2)
	{

		while (av [1][j])
		{
			if (av [1][j] == 'a')
			{
				_putchar('a');
				_putchar('\n');
				return (0);
			}
			j++;
		}
	}	
	else
	{
		_putchar('a');
		_putchar('\n');
	}
}

			
