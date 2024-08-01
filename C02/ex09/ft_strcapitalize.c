
int	ft_alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	ft_str_is_lowercase(char *st)
{
	int	i;

	i = 0;
	while (st[i] != '\0')
	{
		if (st[i] >= 'A' && st[i] <= 'Z')
			st[i] += 32;
		i++;
	}
	printf("st ;; %s\n", st);
	return (*st);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	ft_str_is_lowercase(str);
	n = 0;
	while (str[n] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (ft_alphanum(str[n]) == 0)
		{
			if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
			{
				str[n + 1] -= 32;
			}
		}
		n++;
	}
	return (str);
}
