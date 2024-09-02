#include <unistd.h>
void ft_print(char c)
{
	write (1, &c, 1);
}
int main ()
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 != 0 && n % 5 != 0)
		{
			if (n > 9)
				ft_print ((n / 10) + '0');
			ft_print ((n % 10) + '0');
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			write (1, "fizzbuzz ", 8);
		}
		else if (n % 3 == 0)
		{
			write (1,"fizz " , 4);
		}
		else if (n % 5 == 0)
		{
			write (1, "buzz ", 4);
		}
		n++;
		ft_print('\n');
	}
}


