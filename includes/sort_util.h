/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 07:54:17 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/14 08:59:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_UTIL_H
# define SORT_UTIL_H

#include "../includes/stack.h"
#include "../includes/stack.h"

t_value	*find_max(t_stack *stk);
t_value	*find_min(t_stack *stk);
int is_sorted(t_stack *a);

#endif

