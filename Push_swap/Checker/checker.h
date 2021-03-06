/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvarly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:50:26 by uvarly            #+#    #+#             */
/*   Updated: 2019/04/17 16:50:28 by uvarly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"

typedef struct	s_flag
{
	int verbose;
	int colored;
}				t_flag;

void			get_options(t_flag *options, char **av, int ac);
void			get_stack(t_list **stack_a, t_list **stack_b,
		char **av, int ac);
void			get_instr(t_list **instr);

int				are_arguments_valid(char **av, int ac);
int				is_instruction_valid(char *instr);

void			swap(t_list **list);
void			swap_s(t_list **list1, t_list **list2);
void			push(t_list **dst, t_list **src);
void			rotate(t_list **list);
void			rotate_r(t_list **list1, t_list **list2);
void			rrotate(t_list **list);
void			rrotate_r(t_list **list1, t_list **list2);

#endif
