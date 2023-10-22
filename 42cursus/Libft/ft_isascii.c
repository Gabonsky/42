/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:44:54 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/14 18:00:30 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isascii(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (*str >= 0 && *str <= 127)	
		{
			return (1);
		}
			str++;
	}
			return (0);
}

int main ()
{
  char str[] = "c";
  ft_isascii(str);
  printf("%d", ft_isascii(str));
    return 0;
}
