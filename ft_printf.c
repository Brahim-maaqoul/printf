/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:42:11 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/08 11:39:41 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		cp;
	va_list	p;

	i = 0;
	cp = 0;
	va_start(p, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		else if (str[i] == '%')
		{
			i++;
			if (str[i] && str[i] != '%')
				ft_convert(str[i], &cp, va_arg(p, void *));
			else if (str[i] == '%')
				ft_putchar(str[i], &cp);
		}
		else
			ft_putchar(str[i], &cp);
		i++;
	}
	va_end(p);
	return (cp);
}
