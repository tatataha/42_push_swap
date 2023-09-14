/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:35:19 by muhcelik          #+#    #+#             */
/*   Updated: 2023/09/03 13:30:42 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_list	*which_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		min_index;

	min = 0;
	min_index = 1;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (min_index || head->value < min->value))
			{
				min = head;
				min_index = 0;
			}
			head = head->next;
		}
	}
	return (min);
}

void	stack_index(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = which_next_min(stack);
	while (head)
	{
		head->index = index;
		index++;
		head = which_next_min(stack);
	}
}
