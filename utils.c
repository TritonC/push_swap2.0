/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:53:31 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/11/23 17:44:06 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_list	*take_element(t_list **list)
{
	t_list	*tmp;

	tmp = (*list);
	(*list) = (*list)->next;
	tmp->next = NULL;
	return (tmp);
}

void	stack_fill(t_list **stack, char **argv)
{
	int	pos;
	int	val;

	pos = 0;
	*stack = ft_lstnew(ft_atoi_pos(argv[1], &pos));
	if (argv[1][pos] == ' ')
		pos++;
	while (argv[1][pos])
	{
		val = ft_atoi_pos(argv[1], &pos);
		ft_lstadd_back(stack, val);
		if (argv[1][pos] == ' ')
			pos++;
	}
}

void	print_one_stack(t_list *list)
{
	int		value;

	value = list->value;
	ft_printf("list 1\n");
	while (list->next)
	{
		ft_printf("%d\n", list->value);
		list = list->next;
	}
	ft_printf("%d\n", list->value);
}

void	print_stack(t_list *list, t_list *list2)
{
	int		value;
	int		value2;

	value = list->value;
	value2 = list2->value;
	ft_printf("list 1\t\tlist 2\n");
	while (list->next && list2->next)
	{
		ft_printf("%d\t\t%d\n", list->value, list2->value);
		list = list->next;
		list2 = list2->next;
	}
	ft_printf("%d\t\t%d\n", list->value, list2->value);
}
