/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:21:32 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/09 15:18:03 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_printf(char format, const void *value, int *len)
{
	if (format == 's')
		*len += ft_putstr((char *)value);
	else if (format == 'd')
		*len += ft_putnbr((int)value);
	else if (format == 'i')
		*len += ft_putnbr((int)value);
	else if (format == 'c')
		*len += ft_putchar((char)value);
	else if (format == '%')
		*len += ft_putchar('%');
	else if (format == 'p')
		*len += ptr_base((void *)value);
	else if (format == 'x')
		*len += ft_putnbr_base((unsigned int)value, LOWER);
	else if (format == 'X')
		*len += ft_putnbr_base((unsigned int)value, UPPER);
	else if (format == '%')
		*len += ft_putchar('%');
	else if (format == 'u')
		*len += ft_putnbr_unsigned((unsigned int)value);
}

int	ft_printf(const char *forma, ...)
{
	va_list	list;
	void	*to_next;
	int		lenght;

	lenght = 0;
	va_start(list, forma);
	while (*forma)
	{
		if (*forma == '%')
		{
			forma++;
			if (*forma != '%')
				to_next = va_arg(list, void *);
			print_printf(*forma, to_next, &lenght);
		}
		else
			lenght += ft_putchar(*forma);
		forma++;
	}
	va_end(list);
	return (lenght);
}
// int main()
// {
// 	ft_printf("%c", 'a');
// 	ft_printf("\n%s", "hello");
// 	ft_printf("\n%p", 655664);
// 	ft_printf("%d", 1234567890);
// 	ft_printf("\n%i", 55);
// 	ft_printf("\n%u", 9876);
// 	ft_printf("\n%x", 5678);
// 	ft_printf("\n%X", 77676);
// 	ft_printf("\n%%\n");
// }
