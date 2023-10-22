/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:32:27 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/14 13:38:23 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalnum(char *str)
{
	if (*str == '\0')
	{	
		return (0);
	}
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
		{	
			return (1);
		}	
			str++;
	}
			return (0);
}

int main ()
{
  char str[] = "-";
  ft_isalnum(str);
  printf("%d", ft_isalnum(str));
    return 0;
}
