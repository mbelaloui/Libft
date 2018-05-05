/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_end_int_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:15:34 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/05 18:16:58 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

BOOL	ft_add_end_int_list(intmax_t nbr, t_int_list **list)
{
	t_int_list *temp_node;
	t_int_list *pt_list;

	temp_node = ft_new_int_list(nbr);
	if (!temp_node)
		return (F);
	if (ft_is_empty_int_list(*list))
		*list = temp_node;
	else
	{
		pt_list = *list;
		while (pt_list->next)
			pt_list = pt_list->next;
		pt_list->next = temp_node;
	}
	return (T);
}