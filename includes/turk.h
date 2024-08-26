/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:39:36 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/15 11:43:10 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TURK_H
# define TURK_H

# include "../includes/sorting.h"

void	set_index(t_stack *stk);
void	init_sort_turk(t_stack *a, t_stack *b);
t_node	*find_min_node(t_stack *stk);
t_node	*get_most_cheap(t_stack *stk);
void	sub(t_stack *a, t_node *node_b);
void	turk_sort(t_stack *a, t_stack *b);

#endif
