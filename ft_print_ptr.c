/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:51:23 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/19 17:21:14 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hexa(uintptr_t n, int *counter)
{
	char	*up_hexa;

	up_hexa = "0123456789abcdef";
	if (n >= 16)
		hexa(n / 16, counter);
	ft_putchar(up_hexa[n % 16], counter);
}

void	ft_print_ptr(void *ptr, int *counter)
{
	if (ptr == NULL)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	ft_putstr("0x", counter);
	hexa((unsigned long)ptr, counter);
}
