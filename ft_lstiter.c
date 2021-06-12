/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkahvedj <jkahvedj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:24:48 by jkahvedj          #+#    #+#             */
/*   Updated: 2021/06/12 20:07:20 by jkahvedj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: none 
**
** DESCRIPTION:
** iterates the list and applies the function to the content of each element
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
	return ;
}
