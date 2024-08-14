/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:34:16 by codespace         #+#    #+#             */
/*   Updated: 2024/08/14 16:48:02 by codespace        ###   ########.fr       */
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
