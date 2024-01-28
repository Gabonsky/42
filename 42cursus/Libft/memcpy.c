/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:59:29 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/28 10:42:40 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.c"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *source = src;
    unsigned char *destiny = dst;
    size_t contar = 0;
    while (contar < n)
    {
        destiny[contar] = (source[contar];
        contar++;
    }
    return (dst);
}