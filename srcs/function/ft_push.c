/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:23:29 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 11:49:21 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	pa(t_stack *a, t_stack *b, int *pa_cnt)
{
	int	size;
	int data;

	size = ft_size(b);//
	if (size < 1)
		return ;
	data = b->next->data;
	ft_pop(b);
	ft_push_first(a, data);
	*pa_cnt += 1;
	write(1, 'pa\n', 3);
}

void	pb(t_stack *a, t_stack *b, int *pb_cnt)
{
	int	size;
	int data;

	size = ft_size(a);//
	if (size < 1)
		return ;
	data = a->next->data;
	ft_pop(a);
	ft_push_first(b, data);
	*pb_cnt += 1;
	write(1, 'pb\n', 3);
}
