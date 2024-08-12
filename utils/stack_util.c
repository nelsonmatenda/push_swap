/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:05:44 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/12 08:16:11 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack_util.h"

int	set_index(t_stack *stk, int element)
{
	int		i;
	t_node	*p;

	i = 0;
	if (!stk)
		return (-1);
	p = stk->top;
	while (p)
	{
		if (p->value == element)
			return (i);
		i++;
		p = p->next;
	}
	return (-1);
}
