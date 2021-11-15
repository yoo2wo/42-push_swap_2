/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:57:34 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/15 16:49:52 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_stack		*ft_stack_init(void)
{
	t_stack		*temp;

	temp = (t_stack *)malloc(sizeof(t_stack));
	if (!temp)
		ft_error(0);
	temp->data = 0;
	temp->prev = NULL;
	temp->next = NULL;
	return (temp);
}

void		ft_arr_put(char **split_arr, long long *int_arr, int *j, int arr_size) //거꾸로 넣는건가?
{
	int			split_size;
	int			i;
	long long	temp;

	split_size = ft_split_arr_size(split_arr);
	if (split_size > 1)
	{
		i = 0;
		while (i < split_size)
		{
			temp = ft_atoll(split_arr[i]);
			int_arr[arr_size - 1 - *j] = temp;
			(*j)++;
		}
	}
	else
	{
		temp = ft_atoll(*split_arr);
		int_arr[arr_size - 1 - *j] = temp;
		(*j)++;
	}
}

void		ft_init_arr(char **av, long long *int_arr, int ac, int arr_size)
{
	int 	i;
	int 	j;
	char 	**split_arr;

	i = 1;
	j = 0;
	while (i < ac)
	{
		split_arr = ft_split(av[i], ' ');
		ft_arr_put(split_arr, int_arr, &j, arr_size);
		free_str(split_arr);
		i++;
	}
}
