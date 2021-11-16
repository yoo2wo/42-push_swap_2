/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:45:36 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 15:49:15 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rra(t_stack *a)
{
	t_stack *last_a;
	int		data_a;

	last_a = ft_find_last(a);
	data_a = last_a->data;
	ft_pop_last(a);
	ft_push_first(a, data_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_stack *last_b;
	int		data_b;

	last_b = ft_find_last(b);
	data_b = last_b->data;
	ft_pop_last(b);
	ft_push_first(b, data_b);
	write(1, "rra\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
