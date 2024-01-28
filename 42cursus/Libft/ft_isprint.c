/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:01:20 by gvalles-          #+#    #+#             */
/*   Updated: 2024/01/14 17:44:17 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
		if (c >= 32 && c <= 126)
			return (1);
		else
			return (0);
}
