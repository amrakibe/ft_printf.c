/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:21:32 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/05 17:10:32 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *input, ...)
{
	const char *save
	va_list args;
	void	*to_next;
	int	len;

	len = 0;
	va_start(list, input);
	while (*input)
	{
		if(*input == '%')
		{
			input++;
			if(*input != '%')
				to_next = va_arg(list, void *);
			printing(*input, to_next, &len);
		}
		else
			len += putchar(*input);
		input++;
	}
	va_end(list);
	return(len);
}
