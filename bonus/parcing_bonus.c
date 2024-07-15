/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:58:12 by mohimi            #+#    #+#             */
/*   Updated: 2024/07/09 09:24:54 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	r;

	(1) && (i = 0, s = 1, r = 0);
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s *= -1;
	(str[i] == '\0') && (ft_error_message("Error"));
	while (str[i])
	{
		r = r * 10 + (str[i] - 48);
		if ((r * s > 2147483647) || (r * s < -2147483648)
			|| (str[i] < '0' || str[i] > '9'))
			ft_error_message("Error");
		i++;
	}
	(str[i]) && (ft_error_message("Error"));
	return (r * s);
}

static void	ft_duplicat(t_list *lst)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp1 = lst;
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

void	ft_free_leak(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_parcing_b(t_list **nbr, char **av)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		if (!str)
			(ft_free_leak(str), exit(1));
		while (str[j])
		{
			ft_lstadd_back(nbr, ft_lstnew(ft_atoi(str[j])));
			ft_duplicat(*nbr);
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
}
