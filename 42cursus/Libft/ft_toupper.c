/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:56:31 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/24 14:57:57 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
        if (c >= 'a' && c <= 'z')
                c = c -32;
        return (c);                
}

/*  int main() {
    char c = 'm';
    printf("%c -> %c\n", c, toupper(c)); // Imprimirá: m -> M

    c = 'D';
    printf("%c -> %c\n", c, toupper(c)); // Imprimirá: D -> D

    c = '9';
    printf("%c -> %c\n", c, toupper(c)); // Imprimirá: 9 -> 9

    return 0;
} */

