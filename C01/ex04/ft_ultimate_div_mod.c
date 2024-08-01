
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main ()
{
	int  a = 10;
	int b = 2;

	printf("befor division %d  %d \n", a, b);
	ft_ultimate_div_mod(&a ,&b);
	printf("befor division %d , %d \n", a, b);
	return (0);
}*/
