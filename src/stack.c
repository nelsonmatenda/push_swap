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

// static t_value *create_value(int value)
// {
// 	t_value *val;

// 	val = (t_value *)malloc(sizeof(t_value));
// 	if (!val)
// 		return (NULL);
// 	//val->error = 0;
// 	val->v = value;
// 	val->index = 0;
// 	val->target = NULL;
// 	val->above = 0;
// 	val->cost = -1;
// 	val->most_cheap = 0;
// 	return (val);
// }

t_node	*create_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->value = value;
	node->target = NULL;
	node->index = -1;
	node->above = -1;
	node->cost = 0;
	node->most_cheap = 0;
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

void	push(t_stack *stk, t_node *new)
{
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

t_node	*pop(t_stack *stk)
{
	t_node	*node;

	if (!stk || !stk->top)
		return (NULL);
	// popped.error = SUCCESS;
	// popped.value = stk->top->value;
	node = stk->top;
	stk->top = node->next;
	if (stk->bottom == node)
		stk->bottom = NULL;
	else
		stk->top->prev = NULL;
	stk->size--;
	return (node);
}
