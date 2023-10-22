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

#include <stdio.h>
#include <string.h>

void* memcpy(void* destination, const void* source, size_t num)
{
    char* dest = (char*)destination;
    const char* src = (const char*)source;
    size_t i = 0;

    while (i < num)
    {
        dest[i] = src[i];
        i++;
    }

    return destination;
}

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    printf("str1 antes de memcpy\n");
    printf("%s\n", str1);

    // Copia el contenido de str2 a str1 utilizando memcpy y un bucle while
    memcpy(str1, str2, sizeof(str2));

    printf("\nstr1 después de memcpy\n");
    printf("%s\n", str1);

    return 0;
