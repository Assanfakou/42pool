




int main (int ac, char **av)
{
	int i;

	i = ac - 1;
	while (i > 0)
	{
		putchar(av[i]);
		i--;
	}
