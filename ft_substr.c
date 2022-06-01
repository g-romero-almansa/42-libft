/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:23:14 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 12:13:20 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Reservar memoria para crear una substring de (s) que empieze desde el indice 
//(start) y tenga una longitud maxide de (len) caracteres
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		sub = malloc (1 * sizeof(char));
	else if ((ft_strlen(s) - start) > len)
		sub = malloc ((len + 1) * sizeof(char));	
	else
		sub = malloc ((ft_strlen(s) - start + 1) * sizeof(char));	
	if (!sub)
		return (0);
	i = 0;
	while ((size_t)start < ft_strlen(s) && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
