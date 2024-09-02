/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:40:09 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/14 21:51:35 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (av[i] > 0)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
