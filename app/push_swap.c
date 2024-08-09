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
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (ac < 2)
		return (0);//TODO: implemntar erro de input (sem argumento)
	a = create_stack();
	b = create_stack();
	if (!a || !b)
	{
		write(1, "Error\n", sizeof("Error\n"));
		exit (EXIT_FAILURE);
	}

	// TODO: implementar o parsing dos inputs
	i = ac;						// TODO: DEV
								// Estou usando este codigo para preencher apenas a stack A para
	while (--i > 0)				// poder continuar a trabalhar no sort, depois devo eliminar
		push(a, atoi(av[i]));	// estas linhas
	if (is_sorted(a))
		sorting(a, b);


	return (0);
}
