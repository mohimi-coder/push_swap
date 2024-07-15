/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:05:19 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/04 14:05:46 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **b, int i)
{
	t_list	*curr;
	t_list	*prev;
	t_list	*tmp;

	if (ft_lstsize(*b) < 2)
		return ;
	tmp = *b;
	curr = *b;
	prev = (*b)->next;
	while (curr->next)
		curr = curr->next;
	curr->next = tmp;
	tmp->next = NULL;
	(*b) = prev;
	if (i == 1)
		write(1, "rb\n", 3);
}

void	rrb(t_list **b, int i)
{
	t_list	*curr;
	t_list	*prev;

	if (ft_lstsize(*b) < 2)
		return ;
	curr = *b;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	curr->next = *b;
	prev->next = NULL;
	(*b) = curr;
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	sb(t_list **b)
{
	t_list	*tmp;
	t_list	*prev;

	if (!b || !*b)
		return ;
	if (ft_lstsize(*b) < 2)
		return ;
	tmp = *b;
	prev = (*b)->next;
	tmp->next = prev->next;
	prev->next = tmp;
	(*b) = prev;
	write(1, "sb\n", 3);
}
