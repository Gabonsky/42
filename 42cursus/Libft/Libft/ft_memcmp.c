/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:31:07 by gvalles-          #+#    #+#             */
/*   Updated: 2023/10/06 15:50:14 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char		*a;
	const char		*b;
	unsigned int	i;

	a = s1;
	b = s2;
	i = 0;
	if (n < 1)
		return (0);
	while (a[i] == b[i] && i < (n - 1))
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)a[i] - (unsigned char)b[i]);
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *s1;
     s1 = strdup("fiente1");
	 char *s2;
     s2 = strdup("fiente1");

     puts("-------datos--------");
     puts(s1);
	 puts(s2);
     puts("-------resultado fincion base--------");
     printf("%d", memcmp(s1, s2, 20));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     printf("%d", ft_memcmp(s1, s2, 20));
	 printf("%c", '\n');
     return(0);
}*/
