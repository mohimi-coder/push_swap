/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:36:55 by mohimi            #+#    #+#             */
/*   Updated: 2024/04/04 17:20:04 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_message(char *mess)
{
	int	i;

	i = 0;
	while (mess[i])
	{
		write (2, &mess[i], 1);
		i++;
	}
	write (2, "\n", 1);
	exit(1);
	return (-1);
}

void	ft_duplicat(t_list *lst)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp1 = lst;
	ft_indexing(lst);
	while (tmp1)
	{
		tmp = tmp1->next;
		while (tmp)
		{
			if (tmp1->data == tmp->data)
				ft_error_message("Error");
			tmp = tmp-> next;
		}
		tmp1 = tmp1->next;
	}
}

int	is_sort(t_list **lst)
{
	t_list	*iter;

	iter = (*lst);
	while (iter)
	{
		if (iter->next != NULL)
		{
			if (iter->data > iter->next->data)
				return (1);
		}
		iter = iter->next;
	}
	return (0);
}

t_list	*get_min_number(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (lst->data > tmp->data)
			lst = tmp;
		tmp = tmp->next;
	}
	return (lst);
}

t_list	*get_max_number(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (lst->data < tmp->data)
			lst = tmp;
		tmp = tmp->next;
	}
	return (lst);
}
