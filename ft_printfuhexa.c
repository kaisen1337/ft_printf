/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfuhexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:32:05 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/18 17:18:48 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfuhexa(unsigned int n, int *counter)
{
	char	*up_hexa;

	up_hexa = "0123456789ABCDEF";
	if (n >= 16)
		ft_printfuhexa(n / 16, counter);
	ft_putchar(up_hexa[n % 16], counter);
}

// int main()
// {
//     ft_printfuhexa(10);
//     ft_putchar('\n');
//     ft_printfuhexa(12);
//     ft_putchar('\n');
//     ft_printfuhexa(14);
//     return (0);
// }