/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:14:16 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:03:52 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: ctype.h
**
** DESCRIPTION:
** classification routine: alphabetic character
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
