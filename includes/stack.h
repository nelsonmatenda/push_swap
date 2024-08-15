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

#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // TODO: dev

typedef struct s_value t_value;

typedef struct s_node
{
	t_value			*value;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_value
{
	int		v;
	int		error;
	int		index;
	t_node	*target;
	int		above;
	int		most_cheap;
	int		cost;
}		t_value;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int	size;
}			t_stack;

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
