/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_factor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:00:50 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/18 15:03:28 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"
#include <stdio.h>

void	ft_five_end(t_stack *a, t_stack *b, int pb_cnt, int max)
{
	int	i;

	i = 0;
	while (pb_cnt > 0)
	{
		if (b->next->data == max)
		{
			pa(a, b, &i);
			ra(a, &i);
		}
		else
			pa(a, b, &i);
		pb_cnt--;
	}
}

void	ft_factor_three(t_stack *head)
{
	t_stack	*top;
	t_stack	*bottom;
	int		i;
	int		max;
	int		min;

	i = 0;
	top = head->next;
	bottom = head->next->next->next;
	max = ft_find_max(head);
	min = ft_find_min(head);
	if ((top->next->data == min && bottom->data == max) ||
	(top->next->data == max && top->data == min) ||
	(top->data == max && bottom->data == min))
		sa(head);
	if (top->next->data == max)
		rra(head);
	if (top->data == max && top->next->data == min)
		ra(head, &i);
}

void	ft_factor_five(t_stack *a, t_stack *b)
{
	int		max;
	int		min;
	int		pb_cnt;
	int		i;

	i = 0;
	pb_cnt = 0;
	max = ft_find_max(a);
	min = ft_find_min(a);
	while (ft_size(a) > 3)
	{
		if (a->next->data == max || a->next->data == min)
		{
			pb(a, b, &i);
			pb_cnt++;
		}
		else
			ra(a, &i);
	}
	ft_factor_three(a);
	ft_five_end(a, b, pb_cnt, max);
}
