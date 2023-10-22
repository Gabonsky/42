/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:10:10 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/14 12:04:38 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(char *str)
{
	if (*str == '\0')
	{	
		return (0);
	}
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{	
			return (1);
		}	
			str++;
	}
			return (0);
}	

int main ()
{
  char str[] = "Hola, mamaguevo";
  ft_isalpha(str);
  printf("%d", ft_isalpha(str));
    return 0;
}
