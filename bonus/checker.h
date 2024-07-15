/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:23:18 by mohimi            #+#    #+#             */
/*   Updated: 2024/07/09 16:46:29 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

typedef struct s_save
{
	char			*data;
	struct s_save	*next;
}	t_save;

char	**ft_split(char const *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		ft_error_message(char *mess);
t_list	*ft_lstnew(int data);
void	ft_lstadd_back(t_list **lst, t_list *nw);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear_b(t_list **lst);
int		ft_lstsize(t_list *lst);
void	ft_parcing_b(t_list **nbr, char **av);
void	ra(t_list **a);
void	rra(t_list **a);
void	sa(t_list **a);
void	pa(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);
void	rb(t_list **b);
void	rrb(t_list **b);
void	sb(t_list **b);
void	rr(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
int		is_sort(t_list **lst);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_sersh_for_newline(const char *s, int c);
char	*get_next_line(int fd);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_saveadd_back(t_save **lst, t_save *new);
void	ft_saveclear(t_save **lst);
t_save	*ft_savelast(t_save *lst);
t_save	*ft_newsave(char *data);
int		check_line(char *line);
#endif