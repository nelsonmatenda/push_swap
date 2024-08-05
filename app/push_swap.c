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

#include "../includes/list.h"
#include "../includes/operation00.h"
#include "../includes/operation01.h"
#include "../includes/operation02.h"

void	print_list(t_list *lst)
{
	t_node	*p;

	p = lst->top;
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
	t_list	*a;
	t_list	*b;
	//int		i;

	a = create_list();
	b = create_list();
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
	print_list(a);
	print_list(b);
	sa(a);
	sb (b);
	print_list(a);
	print_list(b);
	ss(a, b);
	print_list(a);
	print_list(b);
	pa(a,b);
	print_list(a);
	print_list(b);
	pb(a, b);
	print_list(a);
	print_list(b);
	ra(a);
	rb(b);
	print_list(a);
	print_list(b);
	rr(a, b);
	print_list(a);
	print_list(b);
	rra(a);
	rrb(a);
	print_list(a);
	print_list(b);
	rrr(a, b);
	print_list(a);
	print_list(b);

	return (0);
}
