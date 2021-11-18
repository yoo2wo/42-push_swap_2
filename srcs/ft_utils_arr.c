/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:05:14 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/18 21:45:52 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	free_str(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int		ft_split_arr_size(char **split_arr)
{
	int i;

	i = 0;
	while (split_arr[i])
		i++;
	return (i);
}

int		ft_input_num(int ac, char **av)//i와 사이즈 부분 수정
{
	int		size;
	int		split_size;
	int 	i;
	char	**split_arr;

	size = 0;
	i = 1;
	while (i < ac)
	{
		split_arr = ft_split(av[i], ' ');
		split_size = ft_split_arr_size(split_arr);
		size += split_size;
		free_str(split_arr);
		i++;
	}
	return (size);
}
