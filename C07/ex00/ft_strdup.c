/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 01:44:27 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/14 21:12:56 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*sr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	sr = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		sr[i] = src[i];
		i++;
	}
	sr[i] = '\0';
	return (sr);
}
