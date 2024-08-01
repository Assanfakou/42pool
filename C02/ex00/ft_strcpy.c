
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char sr[] = "hello world";
	char de[] = "lost";
	
	ft_strcpy(de, sr);
	printf("%s", de);
}*/
