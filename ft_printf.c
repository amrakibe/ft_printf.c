/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:21:32 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/07 13:54:14 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_printf(char format, const void *value, int *len)
{
	if (format == 's')
		*len += ft_putstr((char *)value);
	else if (format == 'd' || format == 'i')
		*len += ft_putnbr((int)value);
	else if (format == 'c')
		*len += ft_putchar((char)value);
	// else if (format == 'p')
	// 	*len += pointeur_print((void *)value);
	else if (format == 'u')
		*len += ft_putnbr_unsigned((unsigned)value);
	else if (format == 'x')
		*len += ft_putnbr_base((unsigned int)value, lowercase);
	else if (format == 'X')
		*len += ft_putnbr_base((unsigned int)value, UPPERCASE);
	else if (format == '%')
		*len += ft_putchar('%');
}

int	ft_printf(const char *forma, ...)
{
	va_list	lst;
	void	*to_next;
	int		lenght;

	lenght = 0;
	va_start(lst, forma);
	while (*forma)
	{
		if (*forma == '%')
		{
			forma++;
			if (*forma != '%')
				to_next = va_arg(lst, void *);
			print_printf(*forma, to_next, &lenght);
		}
		else
			lenght += ft_putchar(*forma);
		forma++;
	}
	va_end(lst);
	return (lenght);
}
