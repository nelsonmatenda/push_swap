/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 07:52:05 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/12 09:10:50 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sort_util.h"

int	find_max(t_stack *stk)
{
	int	max;
	t_node	*p;

	p = stk->top;
	max = p->value->v;
	while (p != NULL)
	{
		if (max < p->value->v)
			max = p->value->v;
		p = p->next;
	}
	return (max);
}

int	find_min(t_stack *stk)
{
	int	min;
	t_node	*p;

	p = stk->top;
	min = p->value->v;
	while (p != NULL)
	{
		if (min > p->value->v)
			min = p->value->v;
		p = p->next;
	}
	return (min);
}

int is_sorted(t_stack *a)
{
	t_node	*p;

	if (!a)
		return (0);
	if (a->size == 1)
		return (1);
	p = a->top;
	while(p)
	{
		if (p->next && (p->value->v > p->next->value->v))
				return (0);
		p = p->next;
	}
	return (1);
}
