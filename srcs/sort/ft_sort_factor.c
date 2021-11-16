/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_factor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:00:50 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 17:45:48 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

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
	if (top->data == max && top->next->data == min)
		ra(head, &i);
	if (top->next->data == max && bottom->data == min)
		rra(head);
}

void	ft_factor_five(t_stack *a, t_stack *b)
{

}
