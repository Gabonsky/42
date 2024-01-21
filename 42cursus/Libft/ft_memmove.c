/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:09:12 by gvalles-          #+#    #+#             */
/*   Updated: 2023/11/05 17:01:41 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove (void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d < s)
	{
		return (ft_memcpy(d, s, len));
	}
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len -1];
			len--;
		}
	}
	return (d);
}