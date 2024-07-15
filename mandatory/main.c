/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:45:39 by mohimi            #+#    #+#             */
/*   Updated: 2024/07/14 16:28:02 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexing(t_list *lst)
{
	t_list	*tmp;
	t_list	*tmpx;
	int		i;

	tmpx = lst;
	while (tmpx)
	{
		i = 0;
		tmp = lst;
		while (tmp)
		{
			if (tmp->data < tmpx->data)
				i++;
			tmp = tmp->next;
		}
		tmpx->indx = i;
		tmpx = tmpx->next;
	}
}

int	max_position(t_list *lst)
{
	t_list	*tmp;
	t_list	*max;

	tmp = lst;
	max = tmp;
	while (tmp)
	{
		if (tmp->data > max->data)
			max = tmp;
		tmp = tmp->next;
	}
	return (max->position);
}

void	mark_position(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = (*stack);
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}

int	main(int ac, char *av[])
{
	t_list	*s_a;
	t_list	*s_b;

	s_a = NULL;
	s_b = NULL;
	if (ac == 1)
		return (0);
	ft_parcing(&s_a, av);
	if (is_sort(&s_a))
	{
		ft_sort(&s_a, &s_b, 0, 0);
		ft_sort_b(&s_a, &s_b, 0);
	}
	ft_lstclear(&s_a);
}
