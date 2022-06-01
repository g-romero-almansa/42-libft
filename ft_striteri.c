/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:33:55 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 14:32:09 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//A cada caracter de la funcion s aplicarle la funcion(f) pasandole como
//parametros el indice de cada caracter de (s) y la direccion del caracter
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = -1;
	if (s && f)
		while (s[++i])
			(*f)(i, &s[i]);
}
