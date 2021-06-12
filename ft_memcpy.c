/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:15:32 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:08:52 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: string.h
**
** DESCRIPTION:
** copy memory areas
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_temp;
	const unsigned char	*src_temp;

	dst_temp = dst;
	src_temp = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dst_temp[i] = src_temp[i];
		i++;
	}
	return (dst);
}
