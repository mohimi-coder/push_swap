/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:11:20 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/20 22:34:25 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_list **lst)
{
	if ((*lst)->data > (*lst)->next->data)
		sa(lst);
	return ;
}

void	ft_sort_three(t_list **lst)
{
	t_list	*max;

	if (is_sort(lst))
	{
		max = get_max_number(*lst);
		if (max->data == (*lst)->data)
			ra(lst, 1);
		else if (max->data == (*lst)->next->data)
			rra(lst, 1);
		if ((*lst)->data > (*lst)->next->data)
			sa(lst);
	}
	return ;
}
