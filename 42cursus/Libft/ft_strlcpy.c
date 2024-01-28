 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:24:28 by gvalles-          #+#    #+#             */
/*   Updated: 2023/11/05 17:25:21 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	
	i = 0;
	while (src[i] != '\0' && i < (dstsize -1) && dstsize !=0)
	{
			dst[i] = src[i];
			i++;
	}
	if (dstsize != 0)
			dst[i] = '\0';
		while (src[i] != '\0')
		{
				i++;
		}
		return (i);
}
/* por que el size_t al principio de la declaracion sin en el man aparece VOID???*/