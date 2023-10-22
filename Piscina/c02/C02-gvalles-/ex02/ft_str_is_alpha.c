/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:54:58 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/20 16:26:40 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	resultado;

	resultado = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
			str++;
	}
	return (1);
}
/*int main ()
{

  char str[] = "Hola, mamaguevo";
  ft_str_is_alpha(str);
  printf("%d\n", ft_str_is_alpha(str));
    return 0;
}*/
