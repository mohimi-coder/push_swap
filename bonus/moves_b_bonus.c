/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:58:03 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/03 14:57:03 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rb(t_list **b)
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
}

void	rrb(t_list **b)
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
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}
