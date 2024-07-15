/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:04:40 by mohimi            #+#    #+#             */
/*   Updated: 2024/05/10 12:17:52 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_sort_five_or_less(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		ft_sort_two(a);
	else if (ft_lstsize(*a) == 3)
		ft_sort_three(a);
	else if (ft_lstsize(*a) == 4)
		ft_sort_four(a, b);
	else if (ft_lstsize(*a) == 5)
		ft_sort_five(a, b);
	ft_lstclear(a);
	return ;
}

void	ft_sort(t_list **a, t_list **b, int i, int x)
{
	t_list	*tmp;

	if (ft_lstsize(*a) <= 5)
		ft_sort_five_or_less(a, b);
	else if (ft_lstsize(*a) <= 100)
		x = 16;
	else
		x = 36;
	while (*a)
	{
		tmp = *a;
		if (tmp->indx <= i)
		{
			pb(a, b);
			i++;
		}
		else if (tmp->indx <= i + x)
		{
			pb(a, b);
			rb(b, 1);
			i++;
		}
		else
			ra(a, 1);
	}
}

void	ft_sort_b(t_list **a, t_list **b, int size)
{
	int	max;

	size = ft_lstsize(*b);
	while (size)
	{
		mark_position(b);
		max = max_position(*b);
		if (max < size / 2)
		{
			while ((*b)->position != max)
				rb(b, 1);
		}
		else
		{
			while ((*b)->position != max)
				rrb(b, 1);
		}
		pa(a, b);
		size--;
	}
}
