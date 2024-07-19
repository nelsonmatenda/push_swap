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
	t_node *node;
	
	node = pop(b_lst);
	push(a_lst, node->value);
	free(node);
}

void	pb(t_list *a_lst, t_list *b_lst)
{
	t_node *node;
	
	node = pop(a_lst);
	push(b_lst, node->value);
	free(node);
}