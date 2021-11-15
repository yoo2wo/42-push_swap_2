/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:01:36 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/15 16:54:50 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void		ft_error(int ret) //return 안해줘도 되지않나
{
	write(1, "Error\n", 6);
	exit(ret);
}

long long	ft_atoll(char *str)
{

}
