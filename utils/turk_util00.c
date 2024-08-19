/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:42:47 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/15 11:57:26 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/turk_util00.h"
#include "../includes/turk_util01.h"

static void	set_target_in_b(t_stack *a, t_stack *b)
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
			if ((b_stk->value->v < a_stk->value->v)
				&& (a_stk->value->v < target_value))
			{
				b_stk->value->target = a_stk;
				target_value = a_stk->value->v;
			}
			a_stk = a_stk->next;
		}
		if (target_value == LONG_MAX)
			b_stk->value->target = find_min_node(a);
		b_stk = b_stk->next;
	}
}

void	set_index(t_stack *stk)
{
	int		i;
	t_node	*p;

	i = -1;
	if (!stk)
		return;
	p = stk->top;
	while (++i < stk->size)
	{
		p->value->index = i;
		if (i < stk->size / 2)
			p->value->above = 1;
		p = p->next;
	}
}

static void	cost(t_stack *a, t_stack *b)
{
	t_node	*p;

	if (!a || !b)
		return;
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

static void	most_cheap(t_stack *stk)
{
	long	min_cost;
	t_node	*most_cheap;
	t_node	*p;

	if (!stk)
		return;
	p = stk->top;
	min_cost = LONG_MAX;
	while (p)
	{
		if (min_cost > p->value->cost)
		{
				min_cost = p->value->cost;
				most_cheap = p;
		}
		p = p->next;
	}
	most_cheap->value->most_cheap = 1;
}

void	init_sort_turk(t_stack *a, t_stack *b)
{
	set_index(a);
	set_index(b);
	printf("AQUI");
	set_target_in_b(a, b);
	cost(a, b);
	most_cheap(b);
}
