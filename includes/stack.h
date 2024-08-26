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

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // TODO: dev

typedef struct s_popped
{
	int	value;
	int	index;
}		t_popped;

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
	int				index;
	struct s_node	*target;
	int				above;
	int				most_cheap;
	int				cost;
}					t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}			t_stack;

enum e_error
{
	ARG_ERROR = -32,
	SORT_ERROR = -45,
	NULL_POINTER = -70,
	EMPTY_STACK = -77,
	ONE_NODE = -33,
	SUCCESS = 1
};

t_node	*create_node(int value);
t_stack	*create_stack(void);
void	push(t_stack *stk, t_node *new);
t_node	*pop(t_stack *stk);

#endif
