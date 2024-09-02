#include <unistd.h>

void _putchar(char c)
{
	write (1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] != '\0')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			_putchar(argv[1][i]);
			i++;
		}
			break;
	}
	}
		_putchar('\n');
}
