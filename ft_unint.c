/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:31:01 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 14:51:55 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_len(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 10 >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_unint(va_list ap)
{
	unsigned int	i;

	i = va_arg(ap, unsigned int);
	ft_putnbr_fd(i, 1);
	return (ft_len(i));
}
