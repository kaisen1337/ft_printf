/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkasimi <nkasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 06:40:41 by nkasimi           #+#    #+#             */
/*   Updated: 2024/11/19 17:58:12 by nkasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *str, int *counter);
void	ft_putnbr(int n, int *counter);
void	ft_printhexa(unsigned int n, int *counter);
void	ft_printfuhexa(unsigned int n, int *counter);
void	ft_putunbr(unsigned int n, int *counter);
void	format_specifier(va_list arguements, char specifier, int *counter);
void	ft_print_ptr(void *ptr, int *counter);
#endif

// unsigned long pointer;