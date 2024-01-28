/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:17:38 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/25 22:23:49 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			x = i;
		}
		i++;
	}
	if (s[x] == (char)c)
		return ((char *)&s[x]);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (0);
}