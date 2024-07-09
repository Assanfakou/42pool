/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 03:05:25 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/03 00:36:55 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

/*int main ()
{
	ft_putnbr(122);
	ft_putchar('\n');
	ft_putnbr(12);
	ft_putchar('\n');
	ft_putnbr(-1245892);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
}*/
