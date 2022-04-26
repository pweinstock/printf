/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:08:47 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 11:30:41 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_len(int n)
{
	int	i;

	i = 1;
	if (n >= 0)
	{
		while (n / 10 >= 1)
		{
			n /= 10;
			i++;
		}
	}
	else
	{
		i++;
		while (n / 10 <= -1)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}

int	ft_int(va_list ap)
{
	int	i;

	i = va_arg(ap, int);
	ft_putnbr_fd(i, 1);
	return (ft_len(i));
}
