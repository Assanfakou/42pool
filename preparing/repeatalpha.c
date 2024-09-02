#include <unistd.h>

void _putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc,char **argv)
{
	int i;
	char j;

	if (argc == 2)
	{

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - i;
				while (j >= 'a')
				{
					_putchar(argv[1][i]);
					j--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - i;
				while (j >= 'A')
				{
					_putchar(argv[1][i]);
					j--;
				}
			}
				else 
					_putchar(argv[1][i]);
				i++;
		}

	}
	_putchar('\n');
}	
