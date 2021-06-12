/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:17:02 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:10:11 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: none
**
** DESCRIPTION:
** output a string to the given file descriptor
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
