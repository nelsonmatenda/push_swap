/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:43:02 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/05 12:43:02 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // TODO: dev

typedef struct s_node
{
	int	value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	size_t	size;
}	t_stack;

typedef struct s_value
{
	int	value;
	int	error;
} t_value;

enum e_error
{
	NULL_POINTER = -70,
	EMPTY_STACK = -77,
	ONE_NODE = -33,
	SUCCESS = 1
};

t_node	*create_node(int value);
t_stack	*create_stack(void);
void	push(t_stack *stk, int value);
t_value	pop(t_stack *stk);

#endif
