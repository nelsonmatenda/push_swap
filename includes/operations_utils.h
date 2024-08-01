/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:46:11 by codespace         #+#    #+#             */
/*   Updated: 2024/07/31 12:34:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef OPERATIONS_UTILS_H
# define OPERATIONS_UTILS_H

#include "list.h"

void	swap(t_list *lst);
void	add_bottom (t_list *lst, int value);
int		pop_bottom (t_list *lst);
void	shift_up(t_list *lst);
void	shift_down(t_list *lst);

#endif
