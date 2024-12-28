/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 06:36:52 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/19 17:57:38 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arguements;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(arguements, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			format_specifier(arguements, str[i], &counter);
		}
		else
			ft_putchar(str[i], &counter);
		i++;
	}
	va_end(arguements);
	return (counter);
}
// #include <limits.h>
// int	main(void)
// {
// 	char a = 'Z';
// 	int b = 16;
// 	// char c[] = "this is ft_printf... >>";
// 	ft_printf("hello%\n");
// 	ft_printf("% c\n", a);
// 	ft_printf("%u\n", b);
// 	ft_printf("% c\n", '4');
// 	ft_printf(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX);
// 	ft_printf("\n*******************
// `***********************************************\n");
// 	printf("%c\n", a);
// 	printf("%u\n", b);
// 	printf("% c\n", '4');
// 	printf("%c\n", a);
// 	ft_printf(" %-1p %-2p ", 0, 0);
// 	return (0);
// }