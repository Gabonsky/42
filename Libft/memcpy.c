/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:29 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/15 22:50:23 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t contar = 0;
    while (contar < n)
    {
        ((unsigned char *)dst)[contar] = ((unsigned char *)src)[contar];
        contar++;
    }
    return (dst);
}