/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:34:20 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/04 14:04:49 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(t_list **a, t_list **b)
{
	t_list	*min;

	if (is_sort(a))
	{
		min = get_min_number(*a);
		while (1)
		{
			if (min->data != (*a)->data)
				rra(a, 1);
			else
				break ;
		}
		pb(a, b);
		ft_sort_three(a);
		pa(a, b);
	}
	return ;
}

void	ft_sort_five(t_list **a, t_list **b)
{
	t_list	*min;

	if (is_sort(a))
	{
		min = get_min_number(*a);
		while (1)
		{
			if (min == (*a)->next)
				ra(a, 1);
			else if (min->data != (*a)->data)
				rra(a, 1);
			else
				break ;
		}
		pb(a, b);
		ft_sort_four(a, b);
		pa(a, b);
		return ;
	}
	return ;
}
