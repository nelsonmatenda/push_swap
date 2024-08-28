/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_util.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:16:50 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/23 14:12:02 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../includes/exit.h"
# include "../includes/libft.h"
# include "../includes/operation.h"

void	ft_free_args(char **args);
long	ft_atol(const char *str, t_stack *a);
int		is_whitespace(char c);
int		ft_isdigit(int c);
void	parsing(t_stack *a, int ac, char **av);

#endif
