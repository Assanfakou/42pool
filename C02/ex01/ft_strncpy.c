
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main ()
{
	char sr[] = "h";
	char des[13];
	char t[15] = "Testing";
	char d[15];
	int i;
	i = 0;
	while(i < 15)
		d[i++] = '+';
	unsigned int s = 3;
	ft_strncpy(des, sr,s);
	printf("des %s ,\n", des);
	printf("des[4] %d ,\n", des[4]);
	printf("des[5] %d ,\n", des[5]);
	printf("des[6] %d ,\n", des[6]);
	ft_strncpy(d, t, 9);
	i = 0;
	while(i < 15)
	{
		printf("[%c %d]  ", d[i], d[i]);
		i++;
	}
}*/
