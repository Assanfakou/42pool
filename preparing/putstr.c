#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}
char	*ft_strrev(char *str)
{
	int i;
	int size;
	char temp;

	i = 0;
	size = 0;
	while (str[size])
		size++;;
	size = size - 1;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		size--;
		i++;
	}
	return str;
}
#include <stdio.h>
int main ()
{
	char st[] = "hello fuck your voice ";
	ft_strrev(st);
	printf("%s\n", st);

}

