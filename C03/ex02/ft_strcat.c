/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:42:05 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/08 11:22:29 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[k])
	{
		k++;
	}
	while (src[i])
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <string.h>
int main ()
{
	char st[] = "hellohd;j";
	char de[] = "assan ";
	ft_strcat(de, st);
	printf("%s\n", de);
}*/
