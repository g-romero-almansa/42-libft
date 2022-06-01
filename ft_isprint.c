/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:37:45 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/03 14:40:27 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Indica si el caracter pasado es printable
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
