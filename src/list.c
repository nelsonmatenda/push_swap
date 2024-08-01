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
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_list	*create_list(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->top = NULL;
	lst->bottom = NULL;
	lst->size = 0;
	return (lst);
}

void	push(t_list *lst, int value)
{
	t_node	*new;

	new = create_node(value);
	if (!new || !lst)
		return;
	new->next = lst->top;
	if (lst->size == 0) // list is empty
		lst->bottom = new;
	else // with element
		lst->top->prev = new;
	lst->top = new;
	lst->size++;
}

int	pop(t_list *lst)
{
	t_node	*node;
	int	value;

	if (!lst && lst->size == 0)
		return (-1);
	value = lst->top->value;
	node = lst->top;
	lst->top = lst->top->next;
	if (lst->bottom == node)
	{
		lst->bottom = NULL;
	}
	else
		lst->top->prev = NULL;
	lst->size--;
	free(node);
	return (value);
}
