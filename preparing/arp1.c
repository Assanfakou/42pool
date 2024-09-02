/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arp1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:18:29 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/11 16:17:17 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_putchar(char c)
{
	write (1, &c, 1);
}

void 	_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

int main (int ac, char **av)
{
	int i;

	i = ac - 1;
	while (i > 0)
	{
		_putstr(av[i]);
		_putchar('\n');
		i--;
	}
}

