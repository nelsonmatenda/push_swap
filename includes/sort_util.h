/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 07:54:17 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/12 07:56:31 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_UTIL_H
# define SORT_UTIL_H

#include "../includes/stack.h"

int	find_max(t_stack *stk);
int	find_min(t_stack *stk);
int is_sorted(t_stack *a);

#endif

