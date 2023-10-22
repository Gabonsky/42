/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:00:37 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/26 15:33:14 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putanbr(int nb)
{
	int		i;
	int		j;
	int		len_c;
	char	c[11];
	char	swap;

	i = 0;
	while (nb > 0)
	{
		c[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	j = i - 1;
	len_c = i;
	i = 0;
	while (i < (len_c / 2))
	{
		swap = c[i];
		c[i] = c[j];
		c[j] = swap;
		i++;
		j--;
	}
	write(1, &c[0], len_c);
}	

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		ft_putanbr(nb);
	}
}		
