/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:15:20 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:08:41 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: string.h
**
** DESCRIPTION:
** compare memory areas
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_unchar;
	unsigned char	*s2_unchar;

	s1_unchar = (unsigned char *)s1;
	s2_unchar = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_unchar[i] != s2_unchar[i])
			return (s1_unchar[i] - s2_unchar[i]);
		i++;
	}
	return (0);
}
