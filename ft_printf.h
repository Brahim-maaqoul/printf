/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:37:30 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/08 11:40:13 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *cp);
void	ft_putstr(char *str, int *cp);
void	ft_putnbr(int n, int *cp);
void	ft_put_hex(unsigned int x, int *cp);
void	ft_put_uphex(unsigned int x, int *cp);
void	ft_putnbr_u(unsigned int n, int *cp);
void	ft_convert(char c, int *cp, void *arg);
void	ft_putp(unsigned long a, int *cp);

#endif