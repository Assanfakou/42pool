/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:10:56 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/03 16:38:12 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size--;
	while (i <= size)
	{
		swap = tab[i];
		tab[i] = tab[size];
		tab[size] = swap;
		i++;
		size--;
	}
}
