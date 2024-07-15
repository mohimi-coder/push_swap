/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:32:37 by mohimi            #+#    #+#             */
/*   Updated: 2024/05/22 17:16:08 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	do_rotate(char *line, t_list **a, t_list **b)
{
	int	i;

	i = 0;
	if (ft_strcmp(line, "ra\n") == 0)
		(ra(a), i++);
	else if (ft_strcmp(line, "rra\n") == 0)
		(rra(a), i++);
	else if (ft_strcmp(line, "rrr\n") == 0)
		(rrr(a, b), i++);
	else if (ft_strcmp(line, "rb\n") == 0)
		(rb(b), i++);
	else if (ft_strcmp(line, "rrb\n") == 0)
		(rrb(b), i++);
	else if (ft_strcmp(line, "rr\n") == 0)
		(rr(a, b), i++);
	return (i);
}

int	do_swap(char *read_line, t_list **a, t_list **b)
{
	int	i;

	i = 0;
	if (ft_strcmp(read_line, "sa\n") == 0)
		(sa(a), i++);
	else if (ft_strcmp(read_line, "sb\n") == 0)
		(sb(b), i++);
	else if (ft_strcmp(read_line, "ss\n") == 0)
		(ss(a, b), i++);
	return (i);
}

void	do_moves(t_save **instru, t_list **s_a, t_list **s_b)
{
	char	*line;
	t_save	*new;

	line = get_next_line(0);
	while (line)
	{
		new = ft_newsave(line);
		if (!new || check_line(line) != 1)
		{
			ft_lstclear_b(s_a);
			ft_lstclear_b(s_b);
			ft_saveclear(instru);
			ft_error_message("Error");
		}
		ft_saveadd_back(instru, new);
		line = get_next_line(0);
	}
}

void	do_operations(t_list **s_a, t_list **s_b, char *line)
{
	if (ft_strcmp(line, "pa\n") == 0)
		pa(s_a, s_b);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(s_a, s_b);
	else if (!do_rotate(line, s_a, s_b))
		do_swap(line, s_a, s_b);
}

int	main(int ac, char *av[])
{
	t_list	*s_a;
	t_list	*s_b;
	t_save	*instru;
	t_save	*tmp;

	s_a = NULL;
	s_b = NULL;
	instru = NULL;
	if (ac == 1)
		return (0);
	ft_parcing_b(&s_a, av);
	do_moves(&instru, &s_a, &s_b);
	tmp = instru;
	while (tmp)
	{
		do_operations(&s_a, &s_b, tmp->data);
		tmp = tmp->next;
	}
	if (is_sort(&s_a) && ft_lstsize(s_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear_b(&s_a);
	ft_saveclear(&instru);
}
