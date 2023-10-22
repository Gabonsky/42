/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcolera- <dcolera-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:36:46 by dcolera-          #+#    #+#             */
/*   Updated: 2023/07/09 14:00:15 by dcolera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char c);

void	print_row(char c1, char c2, int x, int y)
{
	int	i;

	i = 0;
	ft_putchar(c1);
	while (i < (x - 2))
	{
		ft_putchar(c2);
		i++;
	}
	if (x > 1)
	{	
		ft_putchar(c1);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		print_row('A', 'B', x, y);
		while (i < (y -2))
		{
			print_row('B', ' ', x, y);
			i++;
		}
		if (y > 1)
		{
			print_row('C', 'B', x, y);
		}
	}	
}
