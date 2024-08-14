/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:35:41 by codespace         #+#    #+#             */
/*   Updated: 2024/08/14 15:51:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

t_node	set_target_in_b(t_stack *a, t_stack *b)
{
	t_node	*a_stk;
	t_node	*b_stk;
	long	target_value;

	a_stk = a->top;
	b_stk = b->top;
	target_value = LONG_MAX;
	while (b_stk)
	{
		while (a_stk)
		{
			if ((b_stk->value->v < a_stk->value)
				&& (a_stk->value->v < target_value))
			{
				b_stk->value->target = a_stk;
				target_value = a_stk->value->v;
			}
			a_stk = a_stk->next;
		}
		if (target_value == LONG_MAX)
			b_stk->value->target = small_target(a);
		b_stk = b_stk->next;
	}
}

void	set_index(t_stack *stk)
{
	int		i;
	t_node	*p;

	i = -1;
	p = stk->top;
	while (++i < stk->size)
	{
		p->value->index = i;
		if (i < stk->size / 2)
			p->value->above = 1;
		p = p->next;
	}
}

void	cost(t_stack *a, t_stack *b)
{
	t_node	*p;

	p = b->top;
	while (p)
	{
		p->value->cost = p->value->index;
		if (!p->value->above)
			p->value->cost = b->size - p->value->index;
		if (p->value->target->value->above)
			p->value->cost += p->value->target->value->index;
		else
			p->value->cost += a->size - p->value->target->value->index;
		p = p->next;
	}
}

void	most_cheap(t_stack *stk)
{

}

void	init_sort_turk(t_stack *a, t_stack *b)
{
	set_index(a);
	set_index(b);
	set_target_in_b(a, b);
	cost(a, b);
	most_cheap(b);
}
