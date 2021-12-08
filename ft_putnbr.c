/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:58:41 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/08 23:40:24 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	contsize(int nember)
{
	int	i;

	i = 0;
	if (nember < 0)
		i++;
	while (nember != 0)
	{
		nember /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (contsize(nb));
}
