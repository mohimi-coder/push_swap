/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:00:57 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/04 14:05:33 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, int i)
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
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rra(t_list **a, int i)
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
	if (i == 1)
		write(1, "rra\n", 4);
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
	write(1, "sa\n", 3);
}
