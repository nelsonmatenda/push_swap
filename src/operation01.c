/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:42:44 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 14:42:45 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/list.h"

void	ra(t_list *lst)
{
	if (lst->size > 1)
		add_bottom(lst, pop(lst));
}

void	rb(t_list *lst)
{
	if (lst->size > 1)
		add_bottom(lst, pop(lst));
}

void	rr (t_list *a_lst, t_list *b_lst)
{
	ra(a_lst);
	rb(b_lst);
}


