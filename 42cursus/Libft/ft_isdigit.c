/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:04:57 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/14 12:21:14 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isdigit(char *str)
{
	int  i;

	i = 0;
	while (str[i] >='0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i]== '\0')
	{
		return (1);	
	}
	else
	{
		return (0);
	}
}

int main ()
{
  char str[] = "hola";
  ft_isdigit(str);
  printf("%d", ft_isdigit(str));
    return 0;
}

