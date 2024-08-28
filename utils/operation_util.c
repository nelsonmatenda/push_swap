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

#include "../includes/operation.h"

int	swap(t_stack *stk)
{
	int	aux;

	if (!stk)
		return (NULL_POINTER);
	if (stk->size > 1)
	{
		aux = stk->top->value;
		stk->top->value = stk->top->next->value;
		stk->top->next->value = aux;
	}
	else
		return (ONE_NODE);
	return (SUCCESS);
}

void	add_bottom(t_stack *stk, t_node *new)
{
	if (!new || !stk)
		return ;
	new->prev = stk->bottom;
	if (stk->size == 0)
		stk->top = new;
	else
		stk->bottom->next = new;
	stk->bottom = new;
	stk->size++;
}

t_node	*pop_bottom(t_stack *stk)
{
	t_node	*node;

	if (!stk || !stk->top)
		return (NULL);
	node = stk->bottom;
	stk->bottom = node->prev;
	if (stk->top == node)
		stk->top = NULL;
	else
		stk->bottom->next = NULL;
	stk->size--;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

int	shift_up(t_stack *stk)
{
	t_node	*popped;

	if (!stk)
		return (NULL_POINTER);
	if (stk->size > 1)
	{
		popped = pop(stk);
		if (popped == NULL)
			return (EMPTY_STACK);
		add_bottom(stk, popped);
		return (SUCCESS);
	}
	else
		return (ONE_NODE);
}

int	shift_down(t_stack *stk)
{
	t_node	*popped;

	if (!stk)
		return (NULL_POINTER);
	if (stk->size > 1)
	{
		popped = pop_bottom(stk);
		if (popped == NULL)
			return (EMPTY_STACK);
		push(stk, popped);
		return (SUCCESS);
	}
	else
		return (ONE_NODE);
}
