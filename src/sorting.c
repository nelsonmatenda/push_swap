/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:59:21 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/12 09:09:59 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sorting.h"

void	sort_three(t_stack *stk)
{
	int	max;

	max = find_max(stk);
	if (max == stk->top->value->v)
		ra(stk);
	else if (max != stk->bottom->value->v)
		rra(stk);
	if (stk->top->value->v > stk->top->next->value->v)
		sa(stk);
}

static void	sort_small_case(t_stack *a, t_stack *b)
{
	int	min;

	while (a->size > 3)
	{
		min = find_min(a);

		while (min != a->top->value->v)
		{
			rra(a);
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
	// else if (a->size > 5)
	// 	turk_sort(a, b);
}
