/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_util.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:01:18 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/01 18:01:18 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_UTIL_H
# define OPERATION_UTIL_H

#include "stack.h"

int	swap(t_stack *lst);
void	add_bottom (t_stack *lst, int value);
t_value		pop_bottom (t_stack *lst);
int	shift_up(t_stack *lst);
int	shift_down(t_stack *lst);

#endif
