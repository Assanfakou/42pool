/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:48:33 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/01 09:32:02 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
