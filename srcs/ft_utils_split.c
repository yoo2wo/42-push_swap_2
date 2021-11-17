/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoo <jayoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:08:01 by jayoo             #+#    #+#             */
/*   Updated: 2021/11/17 19:16:11 by jayoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

size_t	ft_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] != c && str[i] != 0)
		{
			count++;
			while (str[i] != c && str[i] != 0)
				i++;
		}
		else if (str[i] != 0)
			i++;
	}
	return (count);
}

void		free_all(char **mem, size_t cnt)
{
	size_t	i;

	i = 0;
	while (i < cnt)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
}

void		ft_slcpy(char *dest, char const *src, int start, int last)
{
	int i;

	i = 0;
	while (start < last)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
}

void		ft_split_sub(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i] != 0)
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			str[j] = (char *)malloc((i - start + 1) * sizeof(char));
			if (!str[j])
			{
				free_all(str, j);
				return ;
			}
			ft_slcpy(str[j], s, start, i);
			j++;
		}
		else if (s[i] != 0)
			i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	size_t	n;

	if (s == 0)
		return (0);
	n = ft_count(s, c);
	str = (char **)malloc(sizeof(char *) * (n + 1));
	if (!str)
		return (0);
	str[n] = 0;
	if (n == 0)
		return (str);
	ft_split_sub(s, c, str);
	return (str);
}
