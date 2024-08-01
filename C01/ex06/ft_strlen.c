
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main ()
{
	
	char str[] = "how you doing , this is the bes";

	int length = ft_strlen(str);
	printf("lengthe %d\n ", length);
	return 0;
}*/
