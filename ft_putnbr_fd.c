/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:47:18 by gromero-          #+#    #+#             */
/*   Updated: 2022/06/01 14:28:01 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Enviar el numero (n) al fichero (fd)
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n = n * -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putchar_fd((n % 10 + '0'), fd);
		}
	}
}
