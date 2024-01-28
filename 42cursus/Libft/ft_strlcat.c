/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:12:35 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/24 14:55:23 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	srclen;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	dstlen = i;
	srclen = (ft_strlen(src));
	if (dstsize == 0 || dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[j] != '\0' && j < (dstsize - dstlen - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}