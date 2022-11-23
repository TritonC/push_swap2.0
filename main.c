/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:17:28 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/11/23 17:44:38 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*testing;
	t_list	*stack_b;

	(void)argc;
	stack_b = NULL;
	stack_a = NULL;
	stack_fill(&testing, argv);
	stack_fill(&stack_a, argv);
	push(&stack_a, &stack_b, '\0');
	print_one_stack(stack_b);
}
