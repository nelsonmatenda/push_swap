/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:59:21 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/06 16:30:13 by nfigueir         ###   ########.fr       */
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

void	sorting(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size < 2)
		return;
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
		sort_three(a);
}
