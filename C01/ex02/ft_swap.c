
void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *b;
	*b = *a;
	*a = swp;
}

/*
int	main()
	int s;
	int c;

	c = 13;
	s = 2;
	printf("before c : %d and s, %d\n", c, s);
	ft_swap(&s, &c);
	printf("After c : %d and s, %d\n", c, s);
	return 0;
}*/
