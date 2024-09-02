

#include <unistd.h>

void	_putchar(char c)
{
	write (1, &c, 1);
}

void 	_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/*
int main (int ac ,char **av)
{
	int i;
	int l;

	i =  0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		l = i;
		while (av[1][l])
		{
			if (l > 0)
			{
				_putchar(av[1][l]);
				l--;
			}
		}
		_putchar('\n');
	}
}*/

char *ft_rev_print (char *str)
{
	int i;
	int l;

	i = 0;
	while (str[i])
		i++;
	l = i;
	while (str[l - 1] >= 0)
	{
		_putchar(str[l]);
		l--;
	}
	_putchar('\n');
	return (str);
}
#include <stdio.h>
int main ()
{
	char st[] = "hello world";
	printf("%s", ft_rev_print(st));
}
