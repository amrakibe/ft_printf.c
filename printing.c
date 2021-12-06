/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:45:00 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/06 20:45:15 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void printing(char input, const void *value, int *len)
{
	if(input == 's')
		*len += ft_putstr((char *)value);
	else if (input == 'd' || input == 'i')
		*len += ft_putnbr((int)value);
	else if(input == 'c')
		*len += ft_putchar((char)value);
	else if (input == 'p')
		*len += pointer_print((void *)value);
	else if (input == 'u')
		*len += ft_putnbr_unsign((unsigned)value);
	else if (input == 'x')
		*len += ft_putnbr_base((unsigned int)value, lowercase);
	else if (input == 'X')
		*len += ft_putnbr_base((unsigned int)value, uppercase);
	else if (input == '%')
		*len += ft_putchar('%');
}