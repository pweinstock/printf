/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:42:22 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 15:45:20 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_len(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 16 >= 1)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_hexx(va_list ap)
{
	unsigned int	i;

	i = va_arg(ap, unsigned int);
	ft_puthexx(i);
	return (ft_len(i));
}
