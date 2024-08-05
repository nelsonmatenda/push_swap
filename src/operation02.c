/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:10:22 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/05 11:17:56 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation_util.h"

void	rrr(t_list *a_list, t_list *b_list)
{
	if (shift_down(a_list) == SUCCESS && shift_down(b_list) == SUCCESS)
		write(1, "rrr\n", sizeof("rrr\n"));
}
