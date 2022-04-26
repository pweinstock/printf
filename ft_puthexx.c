/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:43:14 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 15:48:44 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexx(unsigned long n)
{
	const char	*hex;

	hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexx(n / 16);
	ft_putchar_fd(hex[n % 16], 1);
}
