/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:29:03 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/14 21:01:01 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*st;
	int	i;

	if (min >= max)
		return (NULL);
	st = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		st[i] = min;
		i++;
		min++;
	}
	return (st);
}
/*
#include <stdio.h>
int main ()
{
	int *sw = ft_range(10, 100);
	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", sw[i]);
}*/
