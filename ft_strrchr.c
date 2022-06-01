/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:11:02 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/30 16:44:05 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Encuentra el caracter (c) en (s) y duelve la posicion donde lo encuentra,
//'\0' incluido o NULL si no lo encuentra, pero empieza desde el final
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	while (i-- >= 0)
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
	return (NULL);
}
