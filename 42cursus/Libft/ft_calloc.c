/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <gvalles-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:35:04 by gvalles-          #+#    #+#             */
/*   Updated: 2023/10/22 13:40:26 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*c;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	c = malloc(count * size * sizeof(char));
	if (c == NULL)
		return (c);
	ft_bzero(c, (count * size));
	return (c);
}
