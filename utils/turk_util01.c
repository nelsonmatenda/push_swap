/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:47:00 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/22 09:53:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/turk_util01.h"

t_node	*find_min_node(t_stack *stk)
{
	t_node	*p;
	t_node	*min_node;
	int		i;
	long	min;

	if (!stk || !stk->top)
		return (NULL);
	p = stk->top;
	min = LONG_MAX;
	i = -1;
	while (++i < stk->size)
	{
		if (p->value < min)
		{
			min = p->value;
			min_node = p;
		}
		p = p->next;
	}
	return (min_node);
}

t_node	*get_most_cheap(t_stack *stk)
{
	t_node	*p;

	if (!stk || !stk->top)
		return (NULL);
	p = stk->top;
	while (p != NULL)
	{
		if (p->most_cheap)
			return (p);
		p = p->next;
	}
	return (NULL);
}

void	sub(t_stack *a, t_node *node_b)
{
	t_node	*node_a;
	t_node	*target;
	long	target_value;

	target_value = LONG_MAX;
	node_a = a->top;
	while (node_a)
	{
		if (node_a->value > node_b->value && node_a->value < target_value)
		{
			target_value = node_a->value;
			target = node_a;
		}
		node_a = node_a->next;
	}
	if (target_value == LONG_MAX)
		node_b->target = find_min_node(a);
	else
		node_b->target = target;
}
