/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:14:26 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:04:11 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: ctype.h
**
** DESCRIPTION:
** classification routine: ASCII character
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
