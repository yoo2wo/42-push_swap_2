/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:10:37 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 16:59:36 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

void	ft_check_factor(t_stack *a, t_stack *b, int num)
{
	if (num == 1)
		return ;
	else if (num == 2)
		ft_factor_two(a);
	else if (num > 2 && num < 6)
		ft_factor_five(a, b);
	else
		ft_a_b(a, b, num);

}

void	ft_check_sort(long long *int_arr, int arr_size)
{
	int	i;

	i = arr_size - 1;
	while (i > 0)
	{
		if (int_arr[i] > int_arr[i-1]) //이부분 좀 의심이 간다. 부호?
			return ;
		i--;
	}
	exit(0);
}

int		main (int argc, char *argv[])
{
	t_stack		*a;
	t_stack		*b;
	int			arr_size;
	long long	*int_arr;

	if (argc < 2)
		return (0);
	a = ft_stack_init();
	b = ft_stack_init();
	arr_size = ft_input_num(argc, argv);
	//printf("%d\n",arr_size); 개수 확인용
	int_arr = (long long *)malloc(sizeof(long long) * arr_size);
	if (!int_arr)
		ft_error(0);
	ft_init_arr(argv, int_arr, argc, arr_size);
	if (!(ft_check_arr(int_arr, arr_size)))
		ft_error(0);
	ft_check_sort(int_arr, arr_size);
	ft_make_lst(a, int_arr, arr_size);
	ft_check_factor(a, b, arr_size);
	ft_free_lst(a, b);
	return (0);
}
