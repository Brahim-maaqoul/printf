/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:56:46 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/08 11:39:26 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(char c, int *cp, void *arg)
{
	if (c == 'd' || c == 'i')
		ft_putnbr((int)arg, cp);
	else if (c == 'c')
		ft_putchar((char)arg, cp);
	else if (c == 's')
		ft_putstr((char *)arg, cp);
	else if (c == 'u')
		ft_putnbr_u((unsigned int)arg, cp);
	else if (c == 'x')
		ft_put_hex((unsigned int)arg, cp);
	else if (c == 'X')
		ft_put_uphex((unsigned int)arg, cp);
	else if (c == 'p')
		ft_putp((unsigned long)arg, cp);
	else
		return ;
}
