/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:01:36 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/25 11:22:10 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
	{
	int	i;
	int	resultado;

		i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
		resultado = (s1[i] - s2[i]);
	return (resultado);
}
/*int main() 

{
  int resultado;
  
 char s1[10] = "mamaguevo";
 char s2[10] = "mamaguevi";
 ft_strcmp(s1, s2);
  
    printf("%d", resultado);
  
return (0);
}*/
// hay que ver casilla por casilla si son iguales, si no lo son 
// deben restar el uno con el otro por las posiciones ASCII)	
