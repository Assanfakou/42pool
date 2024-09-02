/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:00:43 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/08 17:09:03 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		l = i;
		j = 0;
		while (str[l] == to_find[j] && str[l] && to_find[j])
		{
			l++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
