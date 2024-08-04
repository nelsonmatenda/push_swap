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
	t_list	*a;
	t_list	*b;
	int		i;

	a = create_list();
	b = create_list();
	if (!a || !b)
	{
		write(1, "Error\n", sizeof("Error\n"));
		exit (EXIT_FAILURE);
	}
	i = ac;
	while (--i > 0)
		push(a, atoi(av[i]));
	return (0);
}
