/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_util.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:12:41 by codespace         #+#    #+#             */
/*   Updated: 2024/08/01 13:14:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_UTIL_H
# define OPERATION_UTIL_H

#include "list.h"

void	swap(t_list *lst);
void	add_bottom (t_list *lst, int value);
int		pop_bottom (t_list *lst);
void	shift_up(t_list *lst);
void	shift_down(t_list *lst);

#endif
