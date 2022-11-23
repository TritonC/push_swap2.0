/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:56:23 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/11/23 17:30:44 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **list, char choose_stack)
{
	t_list	*tmp;

	tmp = (*list);
	(*list) = tmp->next;
	tmp->next = (*list)->next;
	(*list)->next = tmp;
	if (choose_stack == 'a')
		ft_printf("sa");
	if (choose_stack == 'b')
		ft_printf("sb");
	else
		return ;
}

void	ss(t_list **list1, t_list **list2, char choose_stack)
{
	swap(list1, '\0');
	swap(list2, '\0');
	if (choose_stack == '1')
		ft_printf("ss");
	else
		return ;
}

void	push(t_list **list, t_list **to_push, char choose_stack)
{
	t_list	*new;

	new = take_element(list);
	if ((*to_push) == NULL)
		(*to_push) = new;
	else
		new->next = (*to_push);
	if (choose_stack == 'a')
		ft_printf("pa");
	if (choose_stack == 'b')
		ft_printf("pb");
	else
		return ;
}
