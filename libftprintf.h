/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:06:44 by pweinsto          #+#    #+#             */
/*   Updated: 2021/07/13 16:57:26 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_char(va_list ap);
int		ft_hex(va_list ap);
int		ft_hexx(va_list ap);
int		ft_int(va_list ap);
int		ft_perc(void);
int		ft_printf(const char *str, ...);
int		ft_ptr(va_list ap);
void	ft_puthex(unsigned long n);
void	ft_puthexx(unsigned long n);
int		ft_specifier(const char *str, va_list ap);
int		ft_str(va_list ap);
int		ft_unint(va_list ap);

#endif
