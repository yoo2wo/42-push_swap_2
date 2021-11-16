/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:52:59 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/16 12:13:01 by jayoo            ###   ########.fr       */
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

//main.c
void	ft_check_sort(long long *int_arr, int arr_size);

//ft_lst.c
void	ft_make_lst(t_stack *head, long long *arr, int cnt);
void	ft_free_lst(t_stack *a, t_stack *b);
t_stack *ft_find_last(t_stack *node);

//ft_init.c
t_stack		*ft_stack_init(void);
void		ft_arr_put(char **split_arr, long long *int_arr, int *j, int arr_size);

//ft_utils.c
void	ft_error(int ret);
long long	ft_atoll(char *str);
int		ft_check_arr(long long *arr, int arr_size);

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

//ft_stack.c
int		ft_size(t_stack *head);
void	ft_pop(t_stack *head);
void	ft_pop_last(t_stack *head);
void	ft_push_first(t_stack *head, int data);
void	ft_push_last(t_stack *head, int data);


//sort/ft_sort_more.c
void	ft_a_b(t_stack *a, t_stack *b, int cnt);

//sort/ft_sort_utils.c
int		ft_find_pivot(t_stack *head, int cnt);
void	ft_sort_arr(long long *arr, int cnt);
void	ft_swap(long long *arr, int i, int min_idx);

//function/ft_rotate.c
void	ra(t_stack *a, int *ra_cnt);
void	rb(t_stack *b, int *rb_cnt);
void	rr(t_stack *a, t_stack *b);

//function/ft_push.c
void	pa(t_stack *a, t_stack *b, int *pa_cnt);
void	pb(t_stack *a, t_stack *b, int *pb_cnt);
#endif
