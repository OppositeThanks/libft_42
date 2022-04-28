/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:58:15 by lperrin           #+#    #+#             */
/*   Updated: 2022/04/27 13:42:50 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		i = *lst;
		while (i->next)
		{
			i = i->next;
		}
		i->next = new;
	}
}
