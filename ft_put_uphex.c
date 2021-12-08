/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uphex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:30:32 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/06 14:34:39 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_uphex(unsigned int x, int *cp)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (x < 16)
	{
		*cp += write(1, &hex[x], 1);
	}
	else
	{
		ft_put_uphex(x / 16, cp);
		ft_put_uphex(x % 16, cp);
	}
}
