/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenajib <abenajib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:34:01 by abenajib          #+#    #+#             */
/*   Updated: 2024/11/12 14:02:31 by abenajib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
		len++;
	}
	return (len);
}
// #include <stdio.h>
// int main()
// {
// 	int n = ft_putstr_fd("helosdjsmcdsc", 1);
// 	printf("\n%d\n", n);
// }
