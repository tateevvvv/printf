/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:18:32 by tasargsy          #+#    #+#             */
/*   Updated: 2025/03/04 17:36:13 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchr(char a);
int	ft_putstr(char *str);
int	ft_putnbr(int num);
int	ft_putnbr_unsigned(unsigned int num);
int	ft_put_hex(unsigned long long num, int up);
int	ft_put_hex_ptr(unsigned long long num);

#endif