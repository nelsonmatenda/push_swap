/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:10:22 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/05 12:41:01 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation_util.h"

void	rrr(t_stack *a_stack, t_stack *b_stack)
{
	if (shift_down(a_stack) == SUCCESS && shift_down(b_stack) == SUCCESS)
		write(1, "rrr\n", sizeof("rrr\n"));
}
