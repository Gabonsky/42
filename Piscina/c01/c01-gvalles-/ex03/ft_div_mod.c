/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:34:43 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/19 12:47:29 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
int a = 10;
int b = 3;
int mod;
int div;

ft_div_mod(a, b, &div, &mod);

printf("la division: %d\n", div);
printf("el residuo: %d\n", mod);
return 0;
}*/
