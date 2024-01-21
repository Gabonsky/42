/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:29 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/15 20:16:25 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memcpy(void* dst, const void *src, size_t n)
{
	unsigned char *destino = dst;
	const unsigned char *fuente = src;
	size_t contar;

	contar = 0;
	while (contar < n)
	{
		destino[contar] = fuente[contar];
		contar++;
	}
	return (dst);