/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:43:51 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/21 11:33:21 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sort_util.h"

t_popped	find_max(t_stack *stk)
{
	t_popped	max;
	t_node	*p;

	if (!stk)
	{
		max.error = 1;
		return (max);
	}
	p = stk->top;
	max.value = p->value;
	while (p)
	{
		if (max.value < p->value)
			max.value = p->value;
		p = p->next;
	}
	return (max);
}

t_popped	find_min(t_stack *stk)
{
	t_popped	min;
	int			i;
	t_node		*p;

	if (!stk)
		return ((t_popped){-1, -1, -1});
	p = stk->top;
	min.value = p->value;
	i = 0;
	while (p && i < stk->size)
	{
		if (min.value > p->value)
		{
			min.value = p->value;
			min.index = i;
		}
		i++;
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
		if (p->next && (p->value > p->next->value))
				return (0);
		p = p->next;
	}
	return (1);
}
