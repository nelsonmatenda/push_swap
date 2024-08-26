/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:56:28 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/23 14:04:49 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/exit.h"

void	free_stack(t_stack *stk)
{
	t_node	*p;
	t_node	*aux;

	if (stk)
	{
		p = stk->top;
		while (p)
		{
			aux = p;
			p = p->next;
			free(aux);
		}
		free(stk);
	}
	p = NULL;
	aux = NULL;
}

void	ft_free_all_stack(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
	a = NULL;
	b = NULL;
}

void	error_msg(int error, char *p)
{
	if (error == EMPTY_STACK)
		return ;
	write(2, "Error\n", sizeof("Error\n"));
	if (error == NULL_POINTER)
		write (2, "Please check memory management in your code.", \
		sizeof("Please check memory management in your code."));
	if (error == ARG_ERROR)
		write(2, "Arguments error: ", sizeof("Arguments error: "));
	if (error == SORT_ERROR)
		write (2, "Something failed during sort.", \
		sizeof("Something failed during sort."));
	if (p)
		write(2, p, sizeof(p));
	write(2, "\n", sizeof("\n"));
}

void	*ft_exit(t_stack *stk_a, t_stack *stk_b, int error, char *param)
{
	(void)stk_a, (void)stk_b;
	if (error < 0)
		error_msg(error, param);
	if (stk_a || stk_b)
		ft_free_all_stack(stk_a, stk_b);
	if (error < 0)
		return (exit(EXIT_FAILURE), (void *)EXIT_FAILURE);
	return (exit(EXIT_SUCCESS), (void *)EXIT_SUCCESS);
}
