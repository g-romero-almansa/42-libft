/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:11:52 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 17:23:22 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Busca la subcadena (needle) en la cadena (haystack) no mas de (len) caracteres
//y devuelve un puntero a la primera posicion de needle en la cadena haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[++i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j] && (i + j < len))
				j++;
			if (j == ft_strlen(needle))
				return (&((char *)haystack)[i]);
			j = 0;
		}
	}
	return (0);
}
