/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:38:46 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/06 14:34:54 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hexlon(unsigned long n, int *cp)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n < 16)
		*cp += write(1, &hex[n], 1);
	else
	{
		ft_put_hexlon(n / 16, cp);
		ft_put_hexlon(n % 16, cp);
	}
}

void	ft_putp(unsigned long a, int *cp)
{
	write(1, "0x", 2);
	*cp += 2;
	ft_put_hexlon(a, cp);
}
