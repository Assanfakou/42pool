/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:10:31 by hfakou            #+#    #+#             */
/*   Updated: 2024/06/27 20:14:57 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;	
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(32);
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (b != 99 || a != 98)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			b++;
		}
		a++;
	}
}
/*
int		main (void)
{
ft_print_comb2();
	return (0);

}*/
