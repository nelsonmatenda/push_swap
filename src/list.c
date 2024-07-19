/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:43:41 by nfigueir          #+#    #+#             */
/*   Updated: 2024/07/19 14:43:42 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/list.h"

t_node	*create_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	node->value = value;
	node->next = NULL;
	return (node);
}

t_list	*creat_list(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->top = NULL;
	lst->bottom = NULL;
	lst->size = 0;
	return (lst);
}

void	push(t_list *lst, int value)
{
	t_node	*new;
	
	new = create_node(value);
	if (lst->size == 0)
		lst->bottom = new;
	new->next = lst->top;
	lst->top = new;
	lst->size++;
}

t_node	*pop(t_list *lst)
{
	t_node *node;

	if (lst->size == 0)
		return (NULL);
	node = lst->top;
	lst->top = lst->top->next;
	lst->size--;
	return (node);
}