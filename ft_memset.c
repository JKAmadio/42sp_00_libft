/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:15:53 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:09:12 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: string.h
**
** DESCRIPTION:
** set memory areas to specific value
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str_temp;

	str_temp = b;
	i = 0;
	while (i < len)
	{
		str_temp[i] = (unsigned char)c;
		i++;
	}
	return ((void *)str_temp);
}
