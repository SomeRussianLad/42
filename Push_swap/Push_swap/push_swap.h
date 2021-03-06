/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvarly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:56:31 by uvarly            #+#    #+#             */
/*   Updated: 2019/04/24 15:56:32 by uvarly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

int		are_arguments_valid(char **av, int ac);
void	get_stack(t_list **stack, char **av, int ac);
void	apply_indexation(t_list *stack);

void	copy_stack(t_list *stack, t_list **stack_a);
void	get_instructions(t_list *stack, t_list **instr, int order);
int		get_true_elements(t_list *stack, int **true_elements, int order);

void	perform_quickest_push(t_list **stack_a, t_list **stack_b, t_list **instr);
void	reset_stack(t_list **stack_a, t_list **instr);

void	swap(t_list **list, t_list **instr, char which_stack);
void	swap_s(t_list **list1, t_list **list2, t_list **instr);
void	push(t_list **dst, t_list **src, t_list **instr, char which_stack);
void	rotate(t_list **list, t_list **instr, char which_stack);
void	rotate_r(t_list **list1, t_list **list2, t_list **instr);
void	rrotate(t_list **list, t_list **instr, char which_stack);
void	rrotate_r(t_list **list1, t_list **list2, t_list **instr);

#endif
