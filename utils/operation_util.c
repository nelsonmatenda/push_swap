/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:37:40 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 16:48:10 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation_util.h"


void	swap(t_list *lst)
{
	t_node	*aux;
	if (lst->size > 1)
	{
		aux = lst->top;
		lst->top = aux->next;
		aux->next = lst->top->next;
		lst->top->next = aux;
	}
	else
		return;
}

void    add_bottom (t_list *lst, int value)
{
	t_node	*node;

	node = create_node(value);
	if (!node || !lst)
		return;
	lst->bottom->next = node;
	lst->bottom = node;
	node->next = NULL;
	lst->size++;
}

int	pop_bottom (t_list *lst)
{
	t_node	*node;
	int	value;

	if (!lst && lst->size == 0)
		return (-1);
	value = lst->bottom->value;
	node = lst->bottom;
	lst->bottom = lst->bottom->prev;
	if (lst->top == node)
	{
		lst->top = NULL;
	}
	else
		lst->bottom->next = NULL;
	lst->size--;
	free(node);
	return (value);
}

void	shift_up(t_list *lst)
{
	int	value;

	if (!lst)
		return;
	if (lst->size > 1)
	{
		value = pop(lst);
		if (value < 0)
			return;
		add_bottom(lst, value);
	}
}

void	shift_down(t_list *lst)
{
	int	value;

	if (!lst)
		return;
	if (lst->size > 1)
	{
		value = pop_bottom(lst);
		if (value < 0)
			return;
		push(lst, value);
	}
}
