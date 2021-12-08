/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:34:49 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/08 23:37:56 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

# define LOWER	"0123456789abcdef"
# define UPPER	"0123456789ABCDEF"

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_putnbr_base(long nb, char *base);
int	ft_putnbr_unsigned(int nb);
int	ft_strlen(char *s);
int	ptr_base(void *p);
int	ft_putnbr_base_ptr(unsigned long nb, char *base);

#endif
