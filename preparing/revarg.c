#include <unistd.h>

void _putchar (char c)
{
	write (1, &c,1);
}

int main (int argc, char **argv)
{
	int length;

	length = 0;
	if (argc == 2)
	{
		while (argv[1][length])
			length++;
		length -= 1;
		while(length >= 0)
		{
			_putchar(argv[1][length--]);
		}
	}
	_putchar('\n');
}
