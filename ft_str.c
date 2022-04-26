/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:35:02 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 16:26:21 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_str(va_list ap)
{
	const char	*str;
	int			i;

	i = 0;
	str = va_arg(ap, const char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (*str)
	{
		write(1, &*str, 1);
		str++;
		i++;
	}
	return (i);
}
