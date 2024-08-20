/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:43:13 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/20 09:02:18 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/turk.h"
#include <stdio.h>

static void	target_to_top(t_stack *stk, t_node *target, char stack)
{
	while (stk->top != target)
	{
		if (stack == 'a')
		{
			if (target->value->above)
				ra(stk);
			else
				rra(stk);
		}
		else if (stack == 'b')
		{
			if (target->value->above)
				rb(stk);
			else
				rrb(stk);
		}
	}
}

static void	sort(t_stack *a, t_stack *b)
{
	t_node	*cheap_node;

	cheap_node = get_most_cheap(b);
	if (cheap_node->value->above && cheap_node->value->target->value->above)
	{
		while ((a->top != cheap_node->value->target) && (b->top != cheap_node))
			rr(a, b);
	}
	else if (!cheap_node->value->above
			&& !cheap_node->value->target->value->above)
	{
		while ((a->top != cheap_node->value->target) && (b->top != cheap_node))
			rrr(a, b);
	}
	set_index(a);
	set_index(b);
	target_to_top(b, cheap_node, 'b');
	target_to_top(a, cheap_node->value->target, 'a');
	pa(a, b);
}

void	turk_sort(t_stack *a, t_stack *b)
{
	t_node	*min_node_a;

	if (!a || !b)
		return;
	while (a->size > 3 && !is_sorted(a))
		pb(a, b);
	if (!is_sorted(a))
		sort_three(a);
	while (b->size || b->top)
	{
		init_sort_turk(a, b);
		sort(a, b);
	}
	set_index(a);
	min_node_a = find_min_node(a);
	if (min_node_a->value->above)
		while (a->top != min_node_a)
			ra(a);
	else
		while (a->top != min_node_a)
			rra(a);
}
