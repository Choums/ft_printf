/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:35:35 by chaidel           #+#    #+#             */
/*   Updated: 2021/12/14 18:28:03 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXA "0123456789abcdef"

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_parsing(char c , args);
char	*ft_itoa_hexa(int number, char *base);

#endif
