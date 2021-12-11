/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:04:47 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/11 15:26:50 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_base(void *p)
{
	unsigned long	x;

	x = (unsigned long)p;
	ft_putstr("0x");
	return (ft_putnbr_base_ptr(x, LOWER) + 2);
}
