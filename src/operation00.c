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

#include "../includes/operation00.h"

void	sa(t_list *lst)
{
	if(swap(lst) == SUCCESS)
		write(1, "sa\n", sizeof("sa\n"));
}

void	sb(t_list *lst)
{
	if(swap(lst) == SUCCESS)
		write(1, "sb\n", sizeof("sb\n"));
}

void	ss(t_list *a_lst, t_list *b_lst)
{
	
	if (swap(a_lst) == SUCCESS && swap(b_lst) == SUCCESS)
		write(1, "ss\n", sizeof("ss\n"));
}

void	pa(t_list *a_lst, t_list *b_lst)
{
	t_value popped;

	popped = pop(b_lst);
	if (popped.error == EMPTY_LIST)
		return;
	push(a_lst, popped.value);
	write(1, "pa\n", sizeof("pa\n"));
}

void	pb(t_list *a_lst, t_list *b_lst)
{
	t_value popped;

	popped = pop(a_lst);
	if (popped.error == EMPTY_LIST)
		return;
	push(b_lst, popped.value);
	write(1, "pb\n", sizeof("pb\n"));
}
