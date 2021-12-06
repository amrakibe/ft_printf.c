/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:48:00 by amrakibe          #+#    #+#             */
/*   Updated: 2021/12/06 20:59:47 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     contsize(int number)
{
    int i;
    
    i = 0;
    if(number < 0)
    i++;
    while(number != 0)
    {
        number /= 10;
        i++;
    }
    return (i);
}

int ft_putnbr_unsigned(int nb)
{
    long n;
    n = (long)nb;
    if (n < 10)
    {
        ft_putchar(n + 48);
    }
    else
    {
        ft_putnbr_unsigned(n / 10);
        ft_putnbr_unsigned(n % 10);
    }
    return(contsize(nb));
}
int main()
{
    printf("\n%d", ft_putnbr_unsigned(-123));
}