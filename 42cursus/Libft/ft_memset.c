# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 14:46:49 by gvalles-          #+#    #+#              #
/*   Updated: 2023/09/15 16:03:53 by gvalles-         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <unistd.h>
#include <stdio.h>

void *ft_menset(void *string, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)string + i) = c;
		i++;
	}
	return (string);
}

int main() {
    char str[50] = "Hola, soy un profesor de informatica.";
    printf("\nAntes de ft_menset(): %s\n", str);

    // Llenar 8 caracteres a partir de str[6] con '*'
    ft_menset(str + 6, '*', 8);

    printf("Después de ft_menset():  %s", str);
    return 0;
}

