/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:43:41 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 14:43:42 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

t_node	*create_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_stack	*create_stack(void)
{
	t_stack	*stk;

	stk = (t_stack *)malloc(sizeof(t_stack));
	if (!stk)
		return (NULL);
	stk->top = NULL;
	stk->bottom = NULL;
	stk->size = 0;
	return (stk);
}

void	push(t_stack *stk, int value)
{
	t_node	*new;

	new = create_node(value);
	if (!new || !stk)
		return;
	new->next = stk->top;
	if (stk->size == 0) // list is empty
		stk->bottom = new;
	else // with element
		stk->top->prev = new;
	stk->top = new;
	stk->size++;
}

t_value	pop(t_stack *stk)
{
	t_node	*node;
	t_value	popped;

	if (!stk || stk->size == 0)
	{
		popped.error = EMPTY_STACK;
		popped.value = -42;
		return (popped);
	}
	popped.error = SUCCESS;
	popped.value = stk->top->value;
	node = stk->top;
	stk->top = stk->top->next;
	if (stk->bottom == node)
		stk->bottom = NULL;
	else
		stk->top->prev = NULL;
	stk->size--;
	free(node);
	return (popped);
}
