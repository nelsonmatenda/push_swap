/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:59:21 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/09 13:13:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sorting.h"


int	find_max(t_stack *stk)
{
	int	max;
	t_node	*p;

	p = stk->top;
	max = p->value;
	while (p != NULL)
	{
		if (max < p->value)
			max = p->value;
		p = p->next;
	}
	return (max);
}

int	find_min(t_stack *stk)
{
	int	min;
	t_node	*p;

	p = stk->top;
	min = p->value;
	while (p != NULL)
	{
		if (min > p->value)
			min = p->value;
		p = p->next;
	}
	return (min);
}

int is_sorted(t_stack *a)
{
	t_node	*p;

	if (!a)
		return (0);

	p = a->top;
	while(p)
	{
		if (p->next)
		{
			if (p->value > p->next->value)
				return (0);
		}
		p = p->next;
	}
	return (1);
}

void	sort_three(t_stack *stk)
{
	int	max;

	max = find_max(stk);
	if (max == stk->top->value)
		ra(stk);
	else if (max != stk->bottom->value)
		rra(stk);
	if (stk->top->value > stk->top->next->value)
		sa(stk);
}

void	sort_small_case(t_stack *a, t_stack *b)
{
	int	min;

	while (a->size > 3)
	{
		min = find_min(a);
		while (min != a->top->value)
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
		if (a->top->value > a->bottom->value)
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
