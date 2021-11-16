/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:49:13 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 12:04:13 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_stack *ft_find_last(t_stack *node)
{
	if (!node)
		return (0);
	while (node->next)
	{
		node = node->next;
	}
	return (node);
}

void	ft_free_lst(t_stack *a, t_stack *b)
{
	t_stack *stack;

	while (a)
	{
		stack = a->next;
		free(a);
		a->next = NULL;
		a->prev = NULL;
		a = stack;
	}
	while (b)
	{
		stack = b->next;
		free(b);
		b->next = NULL;
		b->prev = NULL;
		b = stack;
	}
}

void	ft_make_lst(t_stack *head, long long *arr, int cnt)//newnode 가 헤드에 가깝게
{
	int 	i;
	t_stack	*new_node;

	i = 0;
	while (i < cnt)
	{
		new_node = (t_stack *)malloc(sizeof(t_stack));
		if (!new_node)
			ft_error(0);
		if (head->next == NULL)
		{
			new_node->data = arr[i++];
			new_node->prev = head;
			new_node->next = NULL;
			head->next = new_node;
		}
		else
		{
			new_node->data = arr[i++];
			new_node->next = head->next;
			new_node->prev = head;
			new_node->next->prev = new_node;
			head->next = new_node;
		}
	}
}
