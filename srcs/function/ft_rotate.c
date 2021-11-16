/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:12:34 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 11:22:20 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ra(t_stack *a, int *ra_cnt)
{
	int	data;

	if (a->next == NULL)
		return ;
	data = a->next->data;
	ft_pop(a);
	ft_push_last(a, data);
	*ra_cnt += 1;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b, int *rb_cnt)
{
	int	data;

	if (b->next == NULL)
		return ;
	data = b->next->data;
	ft_pop(b);
	ft_push_last(b, data);
	*rb_cnt += 1;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)//다시 생각해보기
{
	int i;

	i = 0;
	ra(a, &i);
	rb(b, &i);
	write(1, "rr\n" ,3);
}
