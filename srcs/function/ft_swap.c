/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:02:59 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 16:06:19 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	sa(t_stack *a)
{
	int data;
	int size;

	size = ft_size(a);
	if (size < 2)
		return ;
	data = a->next->next->data;
	a->next->next->data = a->next->data;
	a->next->data = data;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int data;
	int size;

	size = ft_size(b);
	if (size < 2)
		return ;
	data = b->next->next->data;
	b->next->next->data = b->next->data;
	b->next->data = data;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
