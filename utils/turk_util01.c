/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:47:00 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/22 09:53:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/turk_util01.h"

t_node	*find_min_node(t_stack *stk)
{
	t_node	*p;
	t_node	*min_node;
	int		i;
	long	min;

	if (!stk || !stk->top)
		return (NULL);
	p = stk->top;
	min = LONG_MAX;
	i = -1;
	while (++i < stk->size)
	{
		if (p->value < min)
		{
			min = p->value;
			min_node = p;
		}
		p = p->next;
	}
	return (min_node);
}

t_node	*get_most_cheap(t_stack *stk)
{
	t_node	*p;

	if (!stk || !stk->top)
		return (NULL);
	p = stk->top;
	while (p != NULL)
	{
		if (p->most_cheap)
			return (p);
		p = p->next;
	}
	return (NULL);
}
