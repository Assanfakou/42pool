
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (j);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "rida";
    char d[100];
    char buff[100];
    unsigned int n = ft_strlcpy(d, s,2);
    unsigned int b = strlcpy(buff, s, 2);

    printf("mine:[%d] %s\n", n, d);
    printf("thiers: [%d] %s\n", b, buff);
    printf("%d" , n);
}*/
