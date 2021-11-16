/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:29:24 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 12:21:35 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	ft_a_b(t_stack *a, t_stack *b, int cnt)
{
	int	a_pivot;
	int	pb_cnt;
	int	ra_cnt;

	if (cnt == 1)
		return ;
	else if (cnt == 2)
	{
		ft_factor_two(a);//
		return ;
	}
	pb_cnt = 0;
	ra_cnt = 0;
	a_pivot = ft_find_pivot(a, cnt);
	while (cnt > 0)
	{
		if (a->next->data > a_pivot)
			ra(a, &ra_cnt);
		else
			pb(a, b, &pb_cnt);
		cnt--;
	}
	ft_rr(a, b, ra_cnt, 0);//
	ft_a_b(a, b, ra_cnt);
	ft_b_a(a, b, pb_cnt);//
}
