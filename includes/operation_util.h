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

#include "list.h"

int	swap(t_list *lst);
void	add_bottom (t_list *lst, int value);
t_value		pop_bottom (t_list *lst);
int	shift_up(t_list *lst);
int	shift_down(t_list *lst);

#endif
