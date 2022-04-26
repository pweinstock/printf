/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:10:57 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 13:45:33 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_len(unsigned long n)
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

int	ft_ptr(va_list ap)
{
	unsigned long	ptr;

	ptr = va_arg(ap, unsigned long);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	ft_puthex(ptr);
	return (ft_len(ptr) + 2);
}
