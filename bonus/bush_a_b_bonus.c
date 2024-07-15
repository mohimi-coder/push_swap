/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bush_a_b_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:56:37 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/03 16:02:22 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	tmp = lst;
	count = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*b) < 1)
		return ;
	tmp = *b;
	*b = tmp->next;
	tmp->next = (*a);
	*a = tmp;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (ft_lstsize(*a) < 1)
		return ;
	tmp = *a;
	tmp2 = *b;
	*a = (*a)->next;
	tmp->next = tmp2;
	*b = tmp;
}
