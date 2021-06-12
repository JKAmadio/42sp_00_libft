/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:19:26 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:06:29 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: none 
**
** DESCRIPTION:
** convert integer to string
*/

#include "libft.h"

static int	ft_countdigits(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	ft_isnegative(long int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char			*str_nbr;
	int				count_digits;
	int				count_aux;
	int				is_negative;
	long int		n_aux;

	n_aux = n;
	is_negative = ft_isnegative(n_aux);
	if (is_negative == 1)
		n_aux *= -1;
	count_digits = ft_countdigits(n_aux);
	count_aux = count_digits;
	str_nbr = malloc(sizeof(char) * (count_digits + is_negative + 1));
	if (!str_nbr)
		return (NULL);
	if (is_negative == 1)
		str_nbr[0] = '-';
	while (count_digits > 0)
	{
		str_nbr[count_digits - 1 + is_negative] = (n_aux % 10) + '0';
		n_aux /= 10;
		count_digits--;
	}
	str_nbr[count_aux + is_negative] = '\0';
	return (str_nbr);
}
