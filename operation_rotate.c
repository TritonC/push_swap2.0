/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:52:32 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/11/23 17:19:20 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list, char choose_stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = (*list);
	last = ft_lstlast((*list));
	(*list) = (*list)->next;
	last->next = tmp;
	if (choose_stack == 'a')
		ft_printf("ra\n");
	if (choose_stack == 'b')
		ft_printf("rb\n");
	else
		return ;
}

void	rr(t_list **list, t_list **list2, char choose_stack)
{
	rotate(list, '\0');
	rotate(list2, '\0');
	if (choose_stack == '1')
		ft_printf("rr\n");
	else
		return ;
}

void	r_rotate(t_list **list, char choose_stack)
{
	t_list	*first;
	t_list	*last;

	first = take_element(list);
	last = ft_lstlast((*list));
	last->next = first;
	if (choose_stack == 'a')
		ft_printf("rra\n");
	if (choose_stack == 'b')
		ft_printf("rrb\n");
	else
		return ;
}

void	rrr(t_list **list, t_list **list2, char choose_stack)
{
	r_rotate(list, '\0');
	r_rotate(list2, '\0');
	if (choose_stack == 'a')
		ft_printf("rrr\n");
	else
		return ;
}
