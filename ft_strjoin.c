/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:05:00 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 12:44:28 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Reservar memoria para la concatenacion de (s2) a (s1) y devolver la string 
//concatenada 
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cont;

	if  (!s1 || !s2)
		return (0);
	cont = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!cont)
		return (0);
	ft_strlcpy (cont, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcat (cont, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (cont);
}
