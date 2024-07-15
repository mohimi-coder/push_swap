/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:57:53 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/03 14:56:38 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_list **a)
{
	t_list	*curr;
	t_list	*prev;
	t_list	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	curr = *a;
	prev = (*a)->next;
	while (curr->next)
		curr = curr->next;
	curr->next = tmp;
	tmp->next = NULL;
	(*a) = prev;
}

void	rra(t_list **a)
{
	t_list	*curr;
	t_list	*prev;

	if (ft_lstsize(*a) < 2)
		return ;
	curr = *a;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	curr->next = *a;
	prev->next = NULL;
	(*a) = curr;
}

void	sa(t_list **a)
{
	t_list	*tmp;
	t_list	*prev;

	if (!a || !*a)
		return ;
	if (ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	prev = (*a)->next;
	tmp->next = prev->next;
	prev->next = tmp;
	(*a) = prev;
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
