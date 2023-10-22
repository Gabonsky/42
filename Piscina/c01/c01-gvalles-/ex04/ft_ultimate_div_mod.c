/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:12:16 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/19 14:49:54 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	dividendo;
	int	divisor;

	dividendo = *a;
	divisor = *b;
	*a = dividendo / divisor;
	*b = dividendo % divisor;
}
/*int main ()
{
int num1 = 10;
int num2 = 5;

ft_ultimate_div_mod(&num1, &num2);
printf("Resultado de la division: %d\n", num1);
printf("Residuo de la division: %d\n", num2);
return 0;

}*/
