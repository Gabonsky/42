/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:52:45 by gvalles-          #+#    #+#             */
/*   Updated: 2023/07/27 18:03:58 by gvalles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_whitespaces_minus(char *str, int *ptr_i)
{
	int	minus_count;
	int	i;

	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	minus_count = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	*ptr_i = i;
	return (minus_count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = 1;
	if (skip_whitespaces_minus(str, &i) % 2 != 0)
		sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
