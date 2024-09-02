/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 06:12:44 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/08 11:53:34 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && n)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char si[] = "hEloo";
	char se[] = "heloo";
	int l = ft_strncmp(si, se, 2);
	int s = strncmp(si, se, 2);
	printf("mine , the combination : %d\n,", l);
	printf("theirs , the combination : %d\n,", s);
}*/
