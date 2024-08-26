/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:12:24 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/26 22:12:24 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "stack.h"

int		swap(t_stack *stk);
void	add_bottom(t_stack *stk, t_node *new);
t_node	*pop_bottom(t_stack *stk);
int		shift_up(t_stack *stk);
int		shift_down(t_stack *stk);
void	sa(t_stack *stk);
void	sb(t_stack *stk);
void	ss(t_stack *a_stk, t_stack *b_stk);
void	pa(t_stack *a_stk, t_stack *b_stk);
void	pb(t_stack *a_stk, t_stack *b_stk);
void	ra(t_stack *stk);
void	rb(t_stack *stk);
void	rr(t_stack *a_stk, t_stack *b_stk);
void	rra(t_stack *stk);
void	rrb(t_stack *stk);
void	rrr(t_stack *a_stack, t_stack *b_stack);

#endif
