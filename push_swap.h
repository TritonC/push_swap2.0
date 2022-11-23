/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:00:02 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/11/23 17:44:10 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "printf.h"
# include "get_next_line.h"
# include "libft.h"

//		LIST FUNCTIONS
t_list	*take_element(t_list **list);

//		INT FUNCTIONS
int		ft_atoi_pos(char *str, int *pos);

//		VOID FUNCTIONS
void	stack_fill(t_list **stack, char **argv);
void	print_stack(t_list *list, t_list *list2);
void	print_one_stack(t_list *list);
void	r_rotate(t_list **list, char choose_stack);
void	ss(t_list **list1, t_list **list2, char choose_stack);
void	swap(t_list **list, char choose_stack);
void	rr(t_list **list, t_list **list2, char choose_stack);
void	rotate(t_list **list, char choose_stack);
void	rrr(t_list **list, t_list **list2, char choose_stack);
void	push(t_list **list, t_list **to_push, char choose_stack);

#endif