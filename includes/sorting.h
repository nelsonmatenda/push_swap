/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:24:32 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/12 07:59:03 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "../includes/operation.h"

t_popped	find_min(t_stack *stk);
int			is_sorted(t_stack *a);
void		sort_three(t_stack *stk);
void		sorting(t_stack *a, t_stack *b);

#endif
