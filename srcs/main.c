/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:10:37 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/15 16:33:56 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

int	main (int argc, char *argv[])
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


}
