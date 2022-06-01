/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:38:36 by gromero-          #+#    #+#             */
/*   Updated: 2022/05/06 15:40:15 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Enviar el caracter (c) al fichero (fd)
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
