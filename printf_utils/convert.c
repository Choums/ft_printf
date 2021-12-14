/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:47:40 by chaidel           #+#    #+#             */
/*   Updated: 2021/12/14 17:03:28 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static  void    ft_negative(int *sign, int *number)
{
    *sign = 1;
    *number = -(*number);
}

static  int ft_get_len_hexa(int number)
{
    int len;

    len = 0;
    while (number > 0)
    {
        number /= 16;
        len++;
    }
    return (len);
}

static  void    ft_set_hexa(int sign, int *len, char *str, int number, char *base)
{
    while (--(*len) >= sign)
    {
        str[*len] = base[number % 16]
        number /= 16;
    }
}

char    *ft_itoa_hexa(int number, char *base)
{
    int     sign;
    int     len;
    char    *str;

    sign = 0;
	if (number == 0)
		return (ft_strdup("0"));
    if (number < 0)
    {
        len = ft_get_len(-number) + 1;
        ft_negative(&sign, &number);
    }
    else
        len = ft_get_len(number); 
    str = (char *)ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    ft_set_hexa(sign, &len, str, number, base);
    if (sign)
        str[len] = '-';
    return (str);
}
