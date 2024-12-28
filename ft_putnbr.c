/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 06:39:36 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/19 17:21:50 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *counter)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-', counter);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, counter);
	}
	ft_putchar(n % 10 + '0', counter);
}
