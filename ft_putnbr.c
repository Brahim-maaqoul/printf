/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:22:51 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/06 18:51:16 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *cp)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-', cp);
	}
	if (nb < 10)
		ft_putchar(nb + 48, cp);
	else
	{
		ft_putnbr(nb / 10, cp);
		ft_putnbr(nb % 10, cp);
	}
}
