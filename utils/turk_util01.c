/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:47:00 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/15 11:52:09 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/turk_util01.h"

t_node	*find_min_node(t_stack *stk)
{
	t_node	*p;
	t_node	*min_node;
	long	min;

	p = stk->top;
	min = LONG_MAX;
	while (p)
	{
		if (p->value->v < min)
		{
			min = p->value->v;
			min_node = p;
		}
		p = p->next;
	}
	return (min_node);
}

t_node	*get_most_cheap(t_stack *stk)
{
	t_node	*p;

	p = stk->top;
	while (p)
	{
		if (p->value->most_cheap)
			return (p);
		p = p->next;
	}
	return (NULL);
}


