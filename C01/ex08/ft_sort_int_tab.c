/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:27:58 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/03 16:54:20 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *b;
	*b = *a;
	*a = swp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
int main ()
{
	int st[] = {34, 21, 12, 67, 1};

	ft_sort_int_tab(st,5);

	printf("0 ;%d\n", st[0]);
	printf("1 ;%d\n", st[1]);
	printf("2 ;%d\n", st[2]);
	printf("3 ;%d\n", st[3]);
	printf("4 ;%d\n", st[4]);
}
*/
