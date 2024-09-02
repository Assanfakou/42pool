/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:33:48 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/16 22:53:41 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_length;
	char	*result;

	total_length = 0;
	i = 0;
	result = NULL;
	while (i < size)
		total_length += ft_strlength(strs[i++]);
	if (size > 1)
		total_length += ft_strlength(sep) * (size - 1);
	total_length += 1;
	result = malloc(sizeof(char) * total_length);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
char*strs[] = {"hello", "world", "this", "is", "a", "test"};
char*sep = "--->";
char*dest = ft_strjoin(6, strs, sep);
printf("%s\n", dest);
free(dest);
}*/
