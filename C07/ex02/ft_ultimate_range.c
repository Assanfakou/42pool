/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:14:29 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/16 22:40:36 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;

	l = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * l);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (l);
}
/*
#include <stdio.h>

int main()
{
    int i;
    int *range;

    ft_ultimate_range(&range, 13, 20);

    for (i = 13; i < 20; i++)
    {
        printf("%d, ", i);
    }
}*/
