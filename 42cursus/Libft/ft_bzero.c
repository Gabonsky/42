/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:04:16 by gvalles-          #+#    #+#             */
/*   Updated: 2023/10/22 17:10:08 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int				cont;
	unsigned char	*str;

	str = s;
	cont = 0;
	while (cont < n)
	{
		str[cont] = '\0';
		cont++;
	}
}

/*int main ()
{
	char str1[50] = "Pizza_de_caraotas";
	char str2[50] = "Hamburguesa_de_lapa";
	printf("%s" , "-----------Datos----------" );
	printf("%c", '\n');
	printf("%s" , str1);
	printf("%c", '\n');
	printf("%s" , str2);
	printf("%c", '\n');
	printf("%s" , "----------Resultado de la funcion base----------");
	printf("%c", '\n');
	bzero(str1, 5);
	printf("%s" , str1);
	printf("%c", '\n');
	printf("%s" , "-----------Resultado de mi funciòn-------------");
	printf("%c", '\n');
	ft_bzero(str2, 5);
	printf("%s" , str2);
	printf("%c", '\n');
}*/
