/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:26:19 by muhcelik          #+#    #+#             */
/*   Updated: 2023/09/06 14:00:37 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(int value);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *head);

void				ft_duplic_checker(t_list *stack);
int					ft_tatoi(char *str);
void				ft_free_split(char **split);
char				**ft_split_1(char const *s, char c);
void				stack_index(t_list **stack);
char				*ft_join_strings(char *s1, char *s2);
void				radix_sort(t_list **stack_a, t_list **stack_b);
void				ft_three_sorter(t_list **stack_a);
void				ft_five_sorter(t_list **stack_a, t_list **stack_b);
void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
void				ra(t_list **stack_a);
void				sa(t_list *stack_a);
void				rra(t_list **stack_a);
int					ft_sorted_checker(t_list *stack_a);
int					ft_find(t_list *stack_a);
#endif