/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:24:32 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/09 13:06:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

#include "../includes/stack.h"
#include "../includes/operation00.h"
#include "../includes/operation01.h"
#include "../includes/operation02.h"

void	sorting(t_stack *a, t_stack *b);
int is_sorted(t_stack *a);

#endif
