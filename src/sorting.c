/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:44:07 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/21 11:44:29 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sorting.h"
#include "../includes/turk.h"

static int	is_in_range(int a, int b, int c)
{
	if (a > b && a < c)
		return (1);
	return (0);
}

void	sort_three(t_stack *stk)
{
	int		first;
	int		second;
	int		third;

	first = stk->top->value;
	second = stk->top->next->value;
	third = stk->bottom->value;
	if (is_in_range(first, second, third))
		sa(stk);
	else if (is_in_range(second, third, first))
	{
		sa(stk);
		rra(stk);
	}
	else if (is_in_range(third, second, first))
		ra(stk);
	else if (is_in_range(third, first, second))
	{
		sa(stk);
		ra(stk);
	}
	else if (is_in_range(first, third, second))
		rra(stk);
}

static void	sort_small_case(t_stack *a, t_stack *b)
{
	t_popped	min;
	int			reverse;

	while (a->size > 3)
	{
		min = find_min(a);
		//printf("%d", min.error);
		if (min.error == -1)
			return;
		//printf("AQUI");
		if (min.index < a->size / 2)
			reverse = 1;
		else
			reverse = -1;
		while (min.value != a->top->value)
		{
			if (reverse == 1)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (b->size >= 1)
		pa(a, b);
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
	else if (a->size <= 5)
		sort_small_case(a, b);
	// else //if (a->size > 5)
	// 	turk_sort(a, b);
}
