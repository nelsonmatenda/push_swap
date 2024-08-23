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


int	swap(t_stack *stk)
{
	t_node	*aux;
	if (!stk)
		return NULL_POINTER;
	if (stk->size > 1)
	{
		aux = stk->top;
		stk->top = aux->next;
		aux->next = stk->top->next;
		stk->top->next = aux;
	}
	else
		return ONE_NODE;
	// stk->top->value->index = stk->size - 1;		TODO: DELETE
	// stk->top->next->value->index = stk->size - 2;TODO: DELETE
	return SUCCESS;
}

void	add_bottom (t_stack *stk, int value)
{
	t_node	*new;

	new = create_node(value);
	if (!new || !stk)
		return;
	new->prev = stk->bottom;
	if (stk->size == 0)
		stk->top = new;
	else
		stk->bottom->next = new;
	stk->bottom = new;
	stk->size++;
}

t_popped	pop_bottom (t_stack *stk)
{
	t_node	*node;
	t_popped	popped;

	if (!stk || stk->size == 0)
	{
		popped.error = EMPTY_STACK;
		popped.value = -42;
		return (popped);
	}
	popped.error = SUCCESS;
	popped.value = stk->bottom->value;
	node = stk->bottom;
	stk->bottom = stk->bottom->prev;
	if (stk->top == node)
		stk->top = NULL;
	else
		stk->bottom->next = NULL;
	stk->size--;
	free(node);
	node = NULL;
	return (popped);
}

int	shift_up(t_stack *stk)
{
	t_popped	popped;

	if (!stk)
		return (NULL_POINTER);
	if (stk->size > 1)
	{
		popped = pop(stk);
		if (popped.error == EMPTY_STACK)
			return (EMPTY_STACK);
		add_bottom(stk, popped.value);
		return (SUCCESS);
	}
	else
		return (ONE_NODE);
}

int	shift_down(t_stack *stk)
{
	t_popped	popped;

	if (!stk)
		return (NULL_POINTER);
	if (stk->size > 1)
	{
		popped = pop_bottom(stk);
		if (popped.error == EMPTY_STACK)
			return (EMPTY_STACK);
		push(stk, popped.value);
		return (SUCCESS);
	}
	else
		return (ONE_NODE);
}
