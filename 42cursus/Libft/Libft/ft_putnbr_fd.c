/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:12:22 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/21 13:12:52 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		write(fd, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr_fd(copia / 10, fd);
		ft_putchar_fd((copia % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copia + '0', fd);
}
