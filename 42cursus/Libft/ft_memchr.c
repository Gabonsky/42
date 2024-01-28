/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:53:29 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/26 15:58:22 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char       *x;
    size_t                      i;

    x = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (x[i] == (unsigned char)c)
                return ((void *)&[i]);
                i++;
    }
    return (NULL);
}