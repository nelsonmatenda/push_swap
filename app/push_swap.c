/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:44:02 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 16:24:04 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"
#include "../includes/operation00.h"
#include "../includes/operation01.h"
#include "../includes/operation02.h"
#include "../includes/sorting.h"
#include "../includes/exit.h"
#include "../includes/parsing_util.h" // TODO: Arrumar melhor os headers

void	print_stack(t_stack *stk)
{
	t_node	*p;

	p = stk->top;
	while (p != NULL)
	{
		printf("%d[%i] ", p->value, p->index);
		p = p->next;
	}
	puts("");
}


int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	//int		i;

	if (ac < 2)
		return (*(int *)ft_exit(NULL, NULL, EXIT_SUCCESS, NULL));
	a = create_stack();
	if (!a)
		return (*(int *)ft_exit(a, NULL, NULL_POINTER, NULL));
	parsing(a, ac,av);
	//print_stack(a);
	if (is_sorted(a))
		return (*(int *)ft_exit(a, NULL, EXIT_SUCCESS, NULL));
	b = create_stack();
	if (!a)
		return (*(int *)ft_exit(a, b, NULL_POINTER, NULL));
	sorting(a, b);
	return (*(int *)ft_exit(a, b, EXIT_SUCCESS, NULL));
}
