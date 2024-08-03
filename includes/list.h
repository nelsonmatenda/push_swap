/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:43:20 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 16:16:34 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // TODO: dev

typedef struct s_node
{
	int	value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_list
{
	t_node	*top;
	t_node	*bottom;
	size_t	size;
}	t_list;

typedef struct s_value
{
	int	value;
	int	error;
} t_value;

typedef enum e_error
{
	EMPTY_LIST = -77,
	SUCCESS = 1
} t_error;

t_node	*create_node(int value);
t_list	*create_list(void);
void	push(t_list *lst, int value);
t_value	pop(t_list *lst);

#endif
