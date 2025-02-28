/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:32:13 by abenajib          #+#    #+#             */
/*   Updated: 2024/11/25 16:41:44 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num, char c)
{
	int		len;
	char	*hex_low;
	char	*hex_upp;

	hex_low = "0123456789abcdef";
	hex_upp = "0123456789ABCDEF";
	len = 0;
	if (c == 'p')
	{
		len += ft_putchar_fd('0', 1);
		len += ft_putchar_fd('x', 1);
		len += ft_puthex(num, 'x');
	}
	if (num >= 16 && c != 'p')
		len += ft_puthex(num / 16, c);
	if (c == 'x')
		len += ft_putchar_fd(hex_low[num % 16], 1);
	else if (c == 'X')
		len += ft_putchar_fd(hex_upp[num % 16], 1);
	return (len);
}
