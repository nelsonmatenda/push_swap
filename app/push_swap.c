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
	(void)av;
	(void)ac;
	t_list	*a;
	t_list	*b;

	//if (ac < 2)
	//	return (-1);
	a = create_list();
	b = create_list();
	push(a, 10);
	push(a, 130);
	push(a, 4);
	push(a, 90);
	push(a, 20);
	push(b, 1);
	push(b, 2);
	push(b, 3);
	push(a,5);
	push(a, 60);
	print_list(a);
	pop(a);
	print_list(a);
	pb(a, b);
	print_list(a);


	return (0);
}
