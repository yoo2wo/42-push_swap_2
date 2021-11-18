/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:50:02 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/18 20:55:05 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_swap(long long *arr, int i, int min_idx)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[min_idx];
	arr[min_idx] = temp;
}

void	ft_sort_arr(long long *arr, int cnt)
{
	int		i;
	int		j;
	int		min;
	int		min_idx;

	i = 0;
	while (i < cnt - 1)
	{
		min = arr[i];
		min_idx = i;
		j = i + 1;
		while (j < cnt)
		{
			if (min > arr[j])
			{
				min = arr[j];
				min_idx = j;
			}
			j++;
		}
		ft_swap(arr, i, min_idx);
		i++;
	}
}

int		ft_find_pivot(t_stack *head, int cnt)//소팅 한후에 pivot을 찾는다.
{
	t_stack		*temp;
	int			i;
	int			result;
	long long	*arr;


	i = 0;
	temp = head->next;
	arr = (long long *)malloc(sizeof(long long) * cnt);
	while (i < cnt)
	{
		arr[i] = temp->data;
		temp = temp->next;
		i++;
	}
	ft_sort_arr(arr, cnt);//c나 c++은 개수를 같이 넘겨야한다.
	result = arr[cnt / 2];
	free(arr);
	return  (result);
}

int		ft_find_min(t_stack *head)
{
	int	min;

	min = head->next->data;
	head = head->next;
	while (head)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}

int		ft_find_max(t_stack *head)
{
	int	max;

	max = head->next->data;
	head = head->next;
	while (head)
	{
		if (max < head->data)
			max = head->data;
		head = head->next;
	}
	return (max);
}
