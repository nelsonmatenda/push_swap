/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:43:13 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/15 07:43:16 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"
#include "../includes/operation00.h"
#include "../includes/operation00.h"
#include "../includes/operation02.h"
#include "../includes/sorting.h"
#include "../includes/turk_util.h"

void	sort_turk(t_stack *a, t_stack *b)
{
	while (a->size > 3)
		pb(a, b);
	sort_three(a);
	if (b->size > 0)
	{

	}
}
