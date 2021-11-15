/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:52:59 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/15 16:56:10 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_stack
{
	struct s_stack	*prev;
	int				data;
	struct s_stack	*next;
}				t_stack;

//ft_init.c
t_stack		*ft_stack_init(void);
void		ft_arr_put(char **split_arr, long long *int_arr, int *j, int arr_size);

//ft_utils.c
void	ft_error(int ret);
long long	ft_atoll(char *str);

//ft_utils_arr.c
void	free_str(char **str);
int		ft_split_arr_size(char **split_arr);
int		ft_input_num(int ac, char **av);

//ft_utils_split.c
static size_t	ft_count(char const *str, char c);
static void		free_all(char **mem, size_t cnt);
static void		ft_slcpy(char *dest, char const *src, int start, int last);
static void		ft_split_sub(char const *s, char c, char **str);
char			**ft_split(char const *s, char c);

#endif
