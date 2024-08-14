/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 07:52:05 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/14 09:32:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sort_util.h"

t_value	*find_max(t_stack *stk)
{
	t_value	*max;
	int		i;
	t_node	*p;

	if (!stk)
		return (NULL);
	i = 0;
	p = stk->top;
	max = p->value;
	while (p && i < stk->size)
	{
		if (max->v < p->value->v)
		{
			max = p->value;
			max->index = i;
		}
		p = p->next;
		i++;
	}
	return (max);
}

t_value	*find_min(t_stack *stk)
{
	t_value	*min;
	int		i;
	t_node	*p;

	p = stk->top;
	min = p->value;
	i = 0;
	while (p && i < stk->size)
	{
		if (min->v > p->value->v)
		{
			min = p->value;
			min->index = i;
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
		if (p->next && (p->value->v > p->next->value->v))
				return (0);
		p = p->next;
	}
	return (1);
}
