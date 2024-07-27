/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:33:54 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/01 09:30:46 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
int main ()
{
	int c, b, l, d;
	l = 0;
	d = 0;

	c = 100;
	b = 10;


	printf("BEFOR %d\n %d ", l, d);
	ft_div_mod(c, b, &l, &d);
	printf("after %d\n %d ", l, d);
	
	return (0);
}*/
