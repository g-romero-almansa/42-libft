/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:37:04 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 13:00:29 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Reservar memoria con malloc y generar una string con el numero (n) y los 
//numeros negativos deben gestionarse
int	ft_long(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n && ++i)
		n /= 10;
	return (i);
}

char *ft_itoa(int n)
{
	char		*s;
	const char	*digits;
	int			i;

	digits = "0123456789";
	i =  ft_long(n);
	s = malloc ((i + 1) * sizeof(char));
	if (!s)
		return (0);
	s[i] = 0;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
		s[0] = '-';
	while (n)
	{
		if (n > 0)
			s[--i] = digits[n % 10];
		else
			s[--i] = digits[n % 10 * -1];
		n /= 10;
	}
	return (s);
}
