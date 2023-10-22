/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:58:04 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/25 19:25:37 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n && (s1[i] && s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*int main() 

{
	int	n;
 int result;
 n = 5;
 char s1[10] = "mamAgueva";
 char s2[10] = "mamaguevA";
 
 result = ft_strncmp(s1, s2, n);
 printf("%d", result);
  
return (0);
}*/
