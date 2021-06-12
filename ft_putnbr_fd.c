/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:16:48 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:10:00 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: none
**
** DESCRIPTION:
** output a integer to the given file descriptor
*/

#include "libft.h"

static int	ft_transf_invert(int nb, int fd)
{
	char	n;

	if (nb >= 10)
		ft_transf_invert(nb / 10, fd);
	n = ((nb % 10) + '0');
	write(fd, &n, 1);
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else
		ft_transf_invert(n, fd);
}
