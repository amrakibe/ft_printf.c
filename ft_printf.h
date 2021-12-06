/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:34:49 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/06 13:39:49 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include<unistd.h>
# include<stdio.h>
# define lowercase "0123456789abcdef"
# define uppercase "0123456789ABCDEF"

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_putnbr_base(long nb,char *base);




#endif