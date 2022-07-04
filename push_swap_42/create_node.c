/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:41:31 by dbagg             #+#    #+#             */
/*   Updated: 2021/12/17 10:41:45 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(long num)
{
	t_stack	*new_elem;

	new_elem = (t_stack *)malloc(sizeof(*new_elem));
	if (!new_elem)
		exit_str("malloc error", 0);
	new_elem->value = (int)num;
	new_elem->next = NULL;
	return (new_elem);
}

void	push_back(t_stack **stack, long num)
{
	t_stack	*new_elem;
	t_stack	*tmp;

	new_elem = create_node(num);
	tmp = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_elem;
}
