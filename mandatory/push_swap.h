/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:35:23 by mohimi            #+#    #+#             */
/*   Updated: 2024/07/14 09:24:10 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
	int				indx;
	int				position;
}	t_list;

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		ft_error_message(char *mess);
t_list	*ft_lstnew(int data);
void	ft_lstadd_back(t_list **lst, t_list *nw);
t_list	*ft_lstlast(t_list *lst);
void	ft_duplicat(t_list *lst);
void	ft_lstclear(t_list **lst);
int		ft_lstsize(t_list *lst);
void	ft_parcing(t_list **nbr, char **av);
void	ra(t_list **a, int i);
void	rra(t_list **a, int i);
void	sa(t_list **a);
void	pa(t_list **a, t_list **b);
void	rb(t_list **b, int i);
void	rrb(t_list **b, int i);
void	sb(t_list **b);
void	pb(t_list **a, t_list **b);
t_list	*get_max_number(t_list *lst);
t_list	*get_min_number(t_list *lst);
void	ft_sort_two(t_list **lst);
void	ft_sort_three(t_list **lst);
void	ft_sort_four(t_list **a, t_list **b);
void	ft_sort_five(t_list **a, t_list **b);
void	ft_sort(t_list **a, t_list **b, int i, int j);
int		is_sort(t_list **lst);
void	ft_indexing(t_list *lst);
int		max_position(t_list *lst);
int		max_position(t_list *lst);
void	mark_position(t_list **stack);
void	ft_sort_b(t_list **a, t_list **b, int i);
#endif