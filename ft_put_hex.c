/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:51:49 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/11 12:32:24 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned int x, int *cp)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (x < 16)
		*cp += write(1, &hex[x], 1);
	else
	{
		ft_put_hex(x / 16, cp);
		ft_put_hex(x % 16, cp);
	}
}
