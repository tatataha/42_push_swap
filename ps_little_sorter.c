/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_little_sorter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:33:43 by muhcelik          #+#    #+#             */
/*   Updated: 2023/09/06 13:46:34 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find(t_list *stack_a)
{
	if (stack_a->index == 0 || stack_a->index == 1)
		return (0);
	return (1);
}

void	ft_five_sorter(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if (ft_find(*stack_a) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	if ((*stack_a)->index == 4)
		ra(stack_a);
	if ((*stack_a)->next->index == 4)
		rra(stack_a);
	if ((*stack_a)->index == 3)
		sa(*stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->index == 1)
		sa(*stack_a);
}

void	ft_three_sorter(t_list **stack_a)
{
	if ((*stack_a)->index == 2)
		ra(stack_a);
	if ((*stack_a)->next->index == 2)
		rra(stack_a);
	if ((*stack_a)->index == 1)
		sa(*stack_a);
}
