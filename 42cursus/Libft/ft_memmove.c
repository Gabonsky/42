/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:09:12 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/28 12:35:42 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d < s)
	{
		return (ft_memcpy(d, s, n));
	}
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n -1];
			n--;
		}
	}
	return (d);
}
