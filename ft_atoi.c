/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:19:51 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 18:47:03 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: stdlib.h
**
** DESCRIPTION:
** convert a string to integer
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	integer;

	integer = 0;
	signal = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		integer = integer * 10 + (str[i] - '0');
		i++;
	}
	return (signal * integer);
}
