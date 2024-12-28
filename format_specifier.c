/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:33:25 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/19 17:57:53 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_specifier(va_list arguements, char specifier, int *counter)
{
	if (specifier == 'd' || specifier == 'i')
		ft_putnbr(va_arg(arguements, int), counter);
	else if (specifier == 'c')
		ft_putchar((char)va_arg(arguements, int), counter);
	else if (specifier == 's')
		ft_putstr((char *)va_arg(arguements, char *), counter);
	else if (specifier == 'u')
		ft_putunbr(va_arg(arguements, unsigned int), counter);
	else if (specifier == 'x')
		ft_printhexa(va_arg(arguements, unsigned int), counter);
	else if (specifier == 'X')
		ft_printfuhexa(va_arg(arguements, unsigned int), counter);
	else if (specifier == 'p')
	{
		ft_print_ptr(va_arg(arguements, void *), counter);
	}
	else if (specifier == '%')
		ft_putchar('%', counter);
}
