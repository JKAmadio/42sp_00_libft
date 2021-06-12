/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:20:59 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:13:35 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: string.h
**
** DESCRIPTION:
** locate a character in string
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;
	int		change;

	change = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last_c = (char *)s;
			change++;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	if (change != 0)
		return (last_c);
	return (NULL);
}
