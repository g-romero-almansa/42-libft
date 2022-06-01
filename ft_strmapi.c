/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:27:59 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 13:07:29 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Aplicar la funcion (*f) a cada caracter de la string (s) dando como parametros
//el indice del caracter y el propio caracter y generar una nueva string de la 
//aplicacion de (*f) y devolverla reservandole memoria
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	if (!s)
		return (0);
	res = malloc (ft_strlen(s) + 1 * sizeof(char));
	if (!res)
		return (0);
	i = -1;
	while (++i < ft_strlen(s))
		res[i] = (*f)(i, s[i]);
	res[i] = '\0';
	return (res);
}
