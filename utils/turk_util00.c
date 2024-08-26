/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:42:47 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/26 08:06:37 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/turk_util00.h"
#include "../includes/turk_util01.h"

static void	set_target_in_b(t_stack *a, t_stack *b)
{
	t_node	*b_stk;

	b_stk = b->top;
	while (b_stk != NULL)
	{
		sub(a, b_stk);
		b_stk = b_stk->next;
	}
}

void	set_index(t_stack *stk)
{
	int		i;
	t_node	*p;

	if (!stk || stk->top)
		return ;
	i = -1;
	p = stk->top;
	while (++i < stk->size)
	{
		p->index = i;
		if (i <= stk->size / 2)
			p->above = 1;
		else
			p->above = 0;
		p = p->next;
	}
}

static void	cost(t_stack *a, t_stack *b)
{
	t_node	*p;

	p = b->top;
	while (p != NULL)
	{
		p->cost = p->index;
		if (!p->above)
			p->cost = b->size - p->index;
		if (p->target->above)
			p->cost += p->target->index;
		else
			p->cost += a->size - p->target->index;
		p = p->next;
	}
}

static void	most_cheap(t_stack *stk)
{
	long	min_cost;
	t_node	*most_cheap;
	t_node	*p;

	if (!stk || !stk->bottom)
		return ;
	p = stk->top;
	min_cost = LONG_MAX;
	while (p != NULL)
	{
		if (min_cost > p->cost)
		{
			min_cost = p->cost;
			most_cheap = p;
		}
		p = p->next;
	}
	most_cheap->most_cheap = 1;
}

void	init_sort_turk(t_stack *a, t_stack *b)
{
	set_index(a);
	set_index(b);
	set_target_in_b(a, b);
	cost(a, b);
	most_cheap(b);
}
