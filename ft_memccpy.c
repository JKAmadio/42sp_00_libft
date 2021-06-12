/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:15:06 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:08:15 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: string.h
**
** DESCRIPTION:
** copy memory area until character found 
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst_temp;
	const unsigned char	*src_temp;
	unsigned char		c_temp;

	dst_temp = dst;
	src_temp = src;
	c_temp = c;
	i = 0;
	while (i < n)
	{
		dst_temp[i] = src_temp[i];
		if (src_temp[i] == c_temp)
			return (&dst_temp[i + 1]);
		i++;
	}
	return (NULL);
}
