/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:18:08 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/12 17:10:55 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	char	*tmp;

	if (!str)
		return (ft_putstr("(null)"));
	tmp = str;
	while (*str)
		ft_putchar(*str++);
	return (str - tmp);
}
