/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:31:20 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/27 10:28:58 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '9')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				if ((n1 != n2) && (n1 != n3) && (n2 != n3))
				{
					write (1, &n1, 1);
					write (1, &n2, 1);
					write (1, &n3, 1);
					write (1, ",", 1);
				}
				n3++;
			}
			n2++;
		}
	n1++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
