/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:17:09 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:10:38 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: none
**
** DESCRIPTION:
** split string into an array of strings
*/

#include "libft.h"

static int	ft_ctwords(char const *s, char c)
{
	int	control;
	int	count;
	int	i;

	i = 0;
	control = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			control = 0;
		else if (s[i] != c && control == 0)
		{
			control = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_mkword(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char *)malloc(i + 1);
	if (!word)
		return (NULL);
	word[i] = '\0';
	while (--i >= 0)
		word[i] = s[i];
	return (word);
}

static char	**ft_create_word(char const *s, char c, char **array_strings)
{
	int	i;
	int	control;
	int	count;

	i = 0;
	control = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			control = 0;
		else if (s[i] != c && control == 0)
		{
			control = 1;
			array_strings[count] = ft_mkword(&s[i], c);
			count++;
		}
		i++;
	}
	array_strings[count] = 0;
	return (array_strings);
}

char	**ft_split(char const *s, char c)
{
	char	**array_strings;

	if (!s)
		return (NULL);
	array_strings = (char **)malloc((ft_ctwords(s, c) + 1) * sizeof(char *));
	if (!array_strings)
		return (NULL);
	return (ft_create_word(s, c, array_strings));
}
