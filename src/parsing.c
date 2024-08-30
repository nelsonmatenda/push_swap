/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:41:47 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/26 07:30:35 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parsing.h"

static int	has_duplicate(int *arr, int size, int num)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == num)
			return (1);
		i++;
	}
	return (0);
}

static void	*check_duplicate(t_stack *stk)
{
	int		i;
	int		*array;
	t_node	*first;

	array = (int *)malloc(sizeof(int) * stk->size);
	if (!stk || !array)
		return (free(array), NULL);
	first = stk->top;
	i = -1;
	while (++i < stk->size && first->next && first->next != stk->top)
	{
		array[i] = first->value;
		if (has_duplicate(array, i, array[i]))
			return (free(array), \
			ft_exit(stk, NULL, ARG_ERROR, "Duplicate numbers detected."));
		first = first->next;
	}
	if (first == stk->bottom)
	{
		array[i] = first->value;
		if (has_duplicate(array, i, array[i]))
			return (free(array), \
			ft_exit(stk, NULL, ARG_ERROR, "Duplicate numbers detected."));
	}
	return (free(array), NULL);
}

static int	str_check(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (!is_whitespace(s[i]) && !ft_isdigit(s[i]) \
			&& s[i] != '-' && s[i] != '+')
			return (0);
		if (ft_isdigit(s[i]))
			count++;
		i++;
	}
	if (!count)
		return (0);
	return (1);
}

static void	*get_value(t_stack *a, char **args)
{
	int		i;
	t_node	*new;
	long	value;

	i = 0;
	while (args && args[i])
	{
		if (!str_check(args[i]))
			return (ft_free_args(args), \
			ft_exit(a, NULL, ARG_ERROR, "Invalid arguments provided."));
		value = ft_atol(args[i], a);
		if (value > INT_MAX || value < INT_MIN)
			return (ft_free_args(args), \
			ft_exit(a, NULL, ARG_ERROR, "Number exceeds INT limit."));
		new = create_node((int)value);
		if (!new)
			return (ft_free_args(args), \
			ft_exit(a, NULL, NULL_POINTER, NULL));
		add_bottom(a, new);
		new = NULL;
		i++;
	}
	return (NULL);
}

void	parsing(t_stack *a, int ac, char **av)
{
	int		i;
	char	**args;

	i = 0;
	while (++i < ac)
	{
		args = ft_split(av[i], ' ');
		if (!args)
			ft_exit(a, NULL, NULL_POINTER, NULL);
		if (!*args)
		{
			ft_free_args(args);
			ft_exit(a, NULL, ARG_ERROR, "NO argument.");
		}
		get_value(a, args);
		ft_free_args(args);
	}
	check_duplicate(a);
}
