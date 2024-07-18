#ifndef LIST_H
# define LIST_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // TODO: dev

typedef struct s_node
{
	int	value;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	t_node	*begin;
	t_node	*end;
	size_t	size;
}	t_list;

t_node	*create_node(int value);
t_list	*creat_list(void);
void	push(t_list *lst, int value);
t_node	*pop(t_list *lst);

#endif