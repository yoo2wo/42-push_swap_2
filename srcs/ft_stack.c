/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:42:33 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 12:20:54 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_push_first(t_stack *head, int data)
{
	t_stack *new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		ft_error(0);
	if (head->next == NULL)
	{
		head->next = new_node;
		new_node->prev = head;
		new_node->next = NULL;
		new_node->data = data;
	}
	else
	{
		head->next->prev = new_node;
		new_node->next = head->next;
		new_node->data = data;
		head->next = new_node;
		new_node->prev = head;
	}

}

void	ft_push_last(t_stack *head, int data)
{
	t_stack *new_node;
	t_stack *last;

	last = ft_find_last(head);
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		ft_error(0);
	if (head->next == NULL)
	{
		head->next = new_node;
		new_node->prev = head;
		new_node->next = NULL;
		new_node->data = data;
	}
	else
	{
		last->next = new_node;
		new_node->prev = last;
		new_node->next = NULL;
		new_node->data = data;
	}

}

void	ft_pop(t_stack *head)
{
	t_stack *del;

	del = head->next;
	if (del == NULL)
		return ;
	if (del->next == NULL)
	{
		head->next = del->next;
		free(del);
	}
	else
	{
		del->next->prev = head;
		head->next = del->next;
		free(del);
	}
}

void	ft_pop_last(t_stack *head)
{
	t_stack *del;

	del = head->next;
	if (del == NULL)
		return ;
	else
	{
		del = ft_find_last(head);
		del->prev->next = NULL;
		free(del);
	}
}

int		ft_size(t_stack *head)
{
	t_stack	*temp;
	int		size;

	size = 0;
	temp = head->next;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
