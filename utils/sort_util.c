/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:43:51 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/23 15:34:25 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sort_util.h"

t_popped	find_min(t_stack *stk)
{
	t_node		*p;
	t_popped	min;
	int			i;

	if (!stk || !stk->top)
		return ((t_popped){0, 0});
	p = stk->top;
	min.value = p->value;
	min.index = 0;
	i = 0;
	while (i < stk->size)
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
