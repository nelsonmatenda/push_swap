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


int	swap(t_list *lst)
{
	t_node	*aux;
	if (!lst)
		return NULL_POINTER;
	if (lst->size > 1)
	{
		aux = lst->top;
		lst->top = aux->next;
		aux->next = lst->top->next;
		lst->top->next = aux;
		return SUCCESS;
	}
	else
		return ONE_NODE;
}

void    add_bottom (t_list *lst, int value)
{
	t_node	*new;

	new = create_node(value);
	if (!new || !lst)
		return;
	new->prev = lst->bottom;
	if (lst->size == 0)
		lst->top = new;
	else
		lst->bottom->next = new;
	lst->bottom = new;
	lst->size++;
}

t_value	pop_bottom (t_list *lst)
{
	t_node	*node;
	t_value	popped;

	if (!lst || lst->size == 0)
	{
		popped.error = EMPTY_LIST;
		popped.value = -42;
		return (popped);
	}
	popped.error = SUCCESS;
	popped.value = lst->bottom->value;
	node = lst->bottom;
	lst->bottom = lst->bottom->prev;
	if (lst->top == node)
		lst->top = NULL;
	else
		lst->bottom->next = NULL;
	lst->size--;
	free(node);
	return (popped);
}

int	shift_up(t_list *lst)
{
	t_value	popped;

	if (!lst)
		return (NULL_POINTER);
	if (lst->size > 1)
	{
		popped = pop(lst);
		if (popped.error == EMPTY_LIST)
			return (EMPTY_LIST);
		add_bottom(lst, popped.value);
		return (SUCCESS);
	}
	else
		return (ONE_NODE);
}

int	shift_down(t_list *lst)
{
	t_value	popped;

	if (!lst)
		return (NULL_POINTER);
	if (lst->size > 1)
	{
		popped = pop_bottom(lst);
		if (popped.error == EMPTY_LIST)
			return (EMPTY_LIST);
		push(lst, popped.value);
		return (SUCCESS);
	}
	else
		return (ONE_NODE);
}
