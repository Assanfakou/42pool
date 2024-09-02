#include <unistd.h>

void	_putchar(char c)
{
	write (1, &c, 1);
}
void	aff_a(int  argv, char **argc[])
{
	argc[argv];

	if (argc[0] == 0)
	{
		_putchar('a');
	}
	else 
		_putchar('0');
}

int		main ()
{
	aff_a(argv, **argc[]);
}
