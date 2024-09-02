/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 03:39:32 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/17 15:44:42 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# include <unistd.h>
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG  "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n"
# define EVEN(N) ((N) % 2 == 0)

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
