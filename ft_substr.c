/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:21:25 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:13:54 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: none
**
** DESCRIPTION:
** create new string with the substring of a string
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		dst = (char *)malloc(sizeof(char) * 1);
	else if (s_len > (start + len))
		dst = (char *)malloc(sizeof(char) * (len + 1));
	else
		dst = (char *)malloc(sizeof(char) * (s_len - start + 1));
	if (!dst)
		return (NULL);
	while (i < len && (start + i) < s_len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
