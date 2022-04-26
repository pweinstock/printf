/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:00:14 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/29 16:05:41 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		nbr;
	va_list	ap;

	nbr = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			nbr += ft_specifier(str, ap);
			str++;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			nbr++;
			str++;
		}
	}
	va_end(ap);
	return (nbr);
}
#include <stdio.h>
int	main(void)
{
	//printf("|%|\n");
	ft_printf("|%|\n");
	return (0);
}