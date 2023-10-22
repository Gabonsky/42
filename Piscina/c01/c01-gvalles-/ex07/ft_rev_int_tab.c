/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:02:19 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/18 22:54:32 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size -(1 + i));
		*((tab + size) - (1 + i)) = temp;
		i++;
	}
}
/*int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int longitud = 6;
    ft_rev_int_tab(array, longitud);
    return 0;
}*/
