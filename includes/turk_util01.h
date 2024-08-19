/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_util01.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:12:06 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/15 11:24:42 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TURK_UTIL01_H
# define TURK_UTIL01_H

#include "../includes/stack.h"

t_node	*find_min_node(t_stack *stk);
t_node	*get_most_cheap(t_stack *stk);

#endif
