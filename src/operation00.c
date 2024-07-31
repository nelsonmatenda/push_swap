/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:42:52 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 17:01:42 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/list.h"

void	sa(t_list *lst)
{
	swap(lst);
}

void	sb(t_list *lst)
{
	swap(lst);
}

void	ss(t_list *a_lst, t_list *b_lst)
{
	swap(a_lst);
	swap(b_lst);
}

void	pa(t_list *a_lst, t_list *b_lst)
{
	int value;

	value = pop(b_lst);
	if (value < 0)
		return;
	push(a_lst, value);
}

void	pb(t_list *a_lst, t_list *b_lst)
{
	int value;

	value = pop(a_lst);
	if (value < 0)
		return;
	push(b_lst, value);
}
