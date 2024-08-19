/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:44:07 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/15 11:42:31 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sorting.h"
#include "../includes/turk.h"

void	sort_three(t_stack *stk)
{
	t_value	*max;

	if (!stk)
		return;
	max = find_max(stk);
	if (max->v == stk->top->value->v)
		ra(stk);
	else if (max->v != stk->bottom->value->v)
		rra(stk);
	if (stk->top->value->v > stk->top->next->value->v)
		sa(stk);
}

static void	sort_small_case(t_stack *a, t_stack *b)
{
	t_value	*min;
	int	reverse;

	reverse = 0;
	while (a->size > 3)
	{
		min = find_min(a);
		if (min->index < a->size / 2)
			reverse = 1;
		while (min->v != a->top->value->v)
		{
			if (reverse != 1)
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	if (b->size >= 1)
		pa(a, b);
}

void	sorting(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size < 2)
		return;
	if (a->size == 2)
	{
		if (a->top->value->v > a->bottom->value->v)
			sa(a);
		else
			return;
	}
	else if (a->size == 3)
		sort_three(a);
	else if (a->size <= 5)
		sort_small_case(a, b);
	else if (a->size > 5)
		turk_sort(a, b);
}
