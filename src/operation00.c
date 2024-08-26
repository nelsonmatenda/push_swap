/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:42:52 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 17:01:42 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation.h"

void	sa(t_stack *stk)
{
	if (swap(stk) == SUCCESS)
		write(1, "sa\n", sizeof("sa\n"));
}

void	sb(t_stack *stk)
{
	if (swap(stk) == SUCCESS)
		write(1, "sb\n", sizeof("sb\n"));
}

void	ss(t_stack *a_stk, t_stack *b_stk)
{
	if (swap(a_stk) == SUCCESS && swap(b_stk) == SUCCESS)
		write(1, "ss\n", sizeof("ss\n"));
}

void	pa(t_stack *a_stk, t_stack *b_stk)
{
	t_node	*popped;

	popped = pop(b_stk);
	if (popped == NULL)
		return ;
	push(a_stk, popped);
	popped = NULL;
	write(1, "pa\n", sizeof("pa\n"));
}

void	pb(t_stack *a_stk, t_stack *b_stk)
{
	t_node	*popped;

	popped = pop(a_stk);
	if (popped == NULL)
		return ;
	push(b_stk, popped);
	popped = NULL;
	write(1, "pb\n", sizeof("pb\n"));
}
