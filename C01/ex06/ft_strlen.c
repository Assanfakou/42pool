/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:34:08 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/01 09:35:56 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main ()
{
	
	char str[] = "how you doing , this is the bes";

	int length = ft_strlen(str);
	printf("lengthe %d\n ", length);
	return 0;
}*/
