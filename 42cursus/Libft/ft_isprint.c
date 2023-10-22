/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:01:20 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/14 18:12:54 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isprint(char *str)
{
	if (*str == '\0')
	{	
		return (0);
	}
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{	
			return (1);
		}	
			str++;
	}
			return (0);
}

int main ()
{
  char str[] = " ";
  ft_isprint(str);
  printf("%d", ft_isprint(str));
    return 0;
}

