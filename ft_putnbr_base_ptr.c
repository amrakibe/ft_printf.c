/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:48:50 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/11 15:26:56 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calculate_length_ptr(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_base_ptr(unsigned long nb, char *base)
{
	if (nb <= (unsigned long)ft_strlen(base) - 1)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / 16, base);
		ft_putnbr_base(nb % 16, base);
	}
	return (calculate_length_ptr(nb));
}
