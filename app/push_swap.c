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
	int	i;
	t_list	*a;
	//t_list	*b;

	a = create_list();
	//b = create_list();
	i = 1;
	while (i < ac)
	{
		push(a, atoi(av[i]));
		i++;
	}
	print_list(a);


	return (0);
}
