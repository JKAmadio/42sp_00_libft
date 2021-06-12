/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:15:41 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:09:01 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: string.h
**
** DESCRIPTION:
** copy memory areas, accept overlap
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_aux;
	char	*src_aux;

	dst_aux = dst;
	src_aux = (char *)src;
	if (!dst && !src && len == 0)
		return (NULL);
	if (dst > src)
	{
		dst_aux += len - 1;
		src_aux += len - 1;
		while (len > 0)
		{
			*dst_aux = *src_aux;
			dst_aux--;
			src_aux--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
