/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:08:56 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 17:26:09 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Convierte en un int los primeros numeros que se encuentra de la string (str)
int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg *= -1;
	res = 0;
	while (ft_isdigit(str[i]))
		res = (res * 10) + (str[i++] - '0');
	res *= neg;
	if (neg > 0 && res < 0)
		return (-1);
	else if (neg < 0 && res > 0)
		return (0);
	return (res);
}
