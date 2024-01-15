/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:30:33 by gvalles-          #+#    #+#             */
/*   Updated: 2023/09/14 19:56:23 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int main (void)
{

printf ("ft_isalnum es %i\n", ft_isalnum('1'));
printf ("ft_isdigit es %i\n", ft_isdigit('z'));
printf ("ft_isalnum es %i\n", ft_isalnum('1'));
printf ("ft_isascii es %d\n", ft_isascii('+'));
printf ("ft_isprint es %d\n", ft_isprint('A'));

}
