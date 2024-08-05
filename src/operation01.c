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

#include "../includes/operation01.h"

void	ra(t_stack *lst)
{
	if(shift_up(lst) == SUCCESS)
		write(1, "ra\n", sizeof("ra\n"));
}

void	rb(t_stack *lst)
{
	if(shift_up(lst) == SUCCESS)
		write(1, "ra\n", sizeof("ra\n"));
}

void	rr (t_stack *a_lst, t_stack *b_lst)
{
	if (shift_up(a_lst) == SUCCESS && shift_up(b_lst) == SUCCESS)
		write(1, "rr\n", sizeof("rr\n"));
}

void	rra(t_stack *lst)
{
	if(shift_down(lst) == SUCCESS)
		write(1, "rra\n", sizeof("rra\n"));
}

void	rrb(t_stack *lst)
{
	if(shift_down(lst) == SUCCESS)
		write(1, "rrb\n", sizeof("rrb\n"));
}
