/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:17:44 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/11 15:28:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base_size(long int nember)
{
	long int	i;	

	i = 0;
	if (nember <= 0)
		i++;
	while (nember != 0)
	{
		nember /= 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_base(long nb, char *base)
{
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n < 16)
	{
		ft_putchar(base[n]);
	}
	else
	{
		ft_putnbr_base(n / 16, base);
		ft_putnbr_base(n % 16, base);
	}
	return (base_size(nb));
}
