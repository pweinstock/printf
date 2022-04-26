/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:53:58 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 13:38:07 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(unsigned long n)
{
	const char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16);
	ft_putchar_fd(hex[n % 16], 1);
}
