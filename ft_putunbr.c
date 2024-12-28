/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 06:57:39 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/19 17:21:59 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *counter)
{
	if (n >= 10)
	{
		ft_putunbr(n / 10, counter);
	}
	ft_putchar(n % 10 + '0', counter);
}

// int main()
// {
//     ft_putunbr(-2147483648);
//     return (0);
// }