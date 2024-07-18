#include "../includes/list.h"

void	print_list(t_list *lst)
{
	t_node	*p;

	p = lst->begin;
	while (p != NULL)
	{
		printf("%d ", p->value);
		p = p->next;
	}
	puts("");
}

int main(int ac, char **av)
{
	(void)av;
	(void)ac;
	t_list	*lst;
	
	//if (ac < 2)
	//	return (-1);
	lst = creat_list();
	push(lst, 10);
	push(lst, 20);
	push(lst,5);
	push(lst, 60);
	print_list(lst);
	pop(lst);
	print_list(lst);
		

	return (0);
}