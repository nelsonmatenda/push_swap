/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:42:44 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 14:42:45 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation.h"

void	ra(t_stack *stk)
{
	if (shift_up(stk) == SUCCESS)
		write(1, "ra\n", sizeof("ra\n"));
}

void	rb(t_stack *stk)
{
	if (shift_up(stk) == SUCCESS)
		write(1, "ra\n", sizeof("ra\n"));
}

void	rr(t_stack *a_stk, t_stack *b_stk)
{
	if (shift_up(a_stk) == SUCCESS && shift_up(b_stk) == SUCCESS)
		write(1, "rr\n", sizeof("rr\n"));
}

void	rra(t_stack *stk)
{
	if (shift_down(stk) == SUCCESS)
		write(1, "rra\n", sizeof("rra\n"));
}

void	rrb(t_stack *stk)
{
	if (shift_down(stk) == SUCCESS)
		write(1, "rrb\n", sizeof("rrb\n"));
}
