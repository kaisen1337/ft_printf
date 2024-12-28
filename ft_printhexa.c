/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:55:39 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/18 17:28:23 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned int n, int *counter)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	if (n >= 16)
		ft_printhexa(n / 16, counter);
	ft_putchar(hexa_base[n % 16], counter);
}
