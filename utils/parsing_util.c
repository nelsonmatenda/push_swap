/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:48:11 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/23 14:08:48 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parsing.h"

void	ft_free_args(char **args)
{
	int	i;

	i = 0;
	while (args && args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

long	ft_atol(const char *str, t_stack *a)
{
	long	nb;
	int		sign;
	long	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		return (*(long *)ft_exit(a, NULL, ARG_ERROR, "Invalid Argument"));
	nb = 0;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + str[i] - '0';
		if (nb > INT_MAX || (nb * sign) < INT_MIN)
			return (LONG_MAX);
		i++;
	}
	return (nb * sign);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}
