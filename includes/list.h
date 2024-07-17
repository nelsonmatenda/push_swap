#ifndef LIST_H
# define LIST_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // TODO: dev

typedef struct s_list
{
	int	value;
	struct s_list	*next;
}	t_list;


#endif