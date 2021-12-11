/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:50:57 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/11 12:42:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *cp)
{
	if (n < 10)
		ft_putchar(n + 48, cp);
	else
	{
		ft_putnbr_u(n / 10, cp);
		ft_putnbr_u(n % 10, cp);
	}
}
