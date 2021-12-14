/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:35:35 by chaidel           #+#    #+#             */
/*   Updated: 2021/12/14 17:19:32 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXA "0123456789abcdef"

# include <stdarg>

int		ft_printf(const char *str, ...);
size_t	ft_parsing(char c , args);
char	*ft_itoa_hexa(int number, char *base);

#endif
