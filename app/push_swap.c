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

void	print_stack(t_stack *stk)
{
	t_node	*p;

	p = stk->top;
	while (p != NULL)
	{
		printf("%d ", p->value);
		p = p->next;
	}
	puts("");
}

int main(int ac, char **av)
{
	(void)ac; (void)av;
	t_stack	*a;
	t_stack	*b;
	//int		i;

	a = create_stack();
	b = create_stack();
	// if (!a || !b)
	// {
	// 	write(1, "Error\n", sizeof("Error\n"));
	// 	exit (EXIT_FAILURE);
	// }
	// i = ac;
	// while (--i > 0)
	// 	push(a, atoi(av[i]));
	push(a, 1);
	push(a, 2);
	push(a, 3);
	push(a, 4);
	push(b, 5);
	push(b, 6);
	push(b, 7);
	push(b, 8);
	print_stack(a);
	print_stack(b);
	sa(a);
	sb (b);
	print_stack(a);
	print_stack(b);
	ss(a, b);
	print_stack(a);
	print_stack(b);
	pa(a,b);
	print_stack(a);
	print_stack(b);
	pb(a, b);
	print_stack(a);
	print_stack(b);
	ra(a);
	rb(b);
	print_stack(a);
	print_stack(b);
	rr(a, b);
	print_stack(a);
	print_stack(b);
	rra(a);
	rrb(a);
	print_stack(a);
	print_stack(b);
	rrr(a, b);
	print_stack(a);
	print_stack(b);

	return (0);
}
