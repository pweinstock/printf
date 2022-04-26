/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:21:07 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 16:24:34 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_specifier(const char *str, va_list ap)
{
	if (*str == 's')
		return (ft_str(ap));
	else if (*str == 'c')
		return (ft_char(ap));
	else if (*str == 'i' || *str == 'd')
		return (ft_int(ap));
	else if (*str == 'u')
		return (ft_unint(ap));
	else if (*str == 'x')
		return (ft_hex(ap));
	else if (*str == 'X')
		return (ft_hexx(ap));
	else if (*str == 'p')
		return (ft_ptr(ap));
	else if (*str == '%')
		return (ft_perc());
	return (0);
}
