/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:49:58 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/06 14:19:07 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Encuentra el caracter (c) en (s) y duelve la posicion donde lo encuentra,
//'\0' incluido o NULL si no lo encuentra
char	*ft_strchr(const char *s, int c)
{
	int	i;

	if ((char)c == '\0')
		return (&((char *)s)[ft_strlen(s)]);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}
