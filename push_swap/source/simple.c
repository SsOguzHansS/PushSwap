/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:13:34 by ogozturk          #+#    #+#             */
/*   Updated: 2022/10/30 16:34:39 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB)
{
	(void)stackB;
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content) // stack_a'nın içinde iki eleman varsa ve sıralı değilse arasında sıralıyor.
			sa(stackA); //sa yapıyor.
	}
	else if (ft_lstsize(*stackA) == 3) //Öyle değilse yani 3 tane elemanım var ise,
		ft_sort_three(stackA); //sort_three'ye gönderiyor.
	else if (ft_lstsize(*stackA) == 4) //Öyle değilse yani 4 tane elemanım var ise,
		ft_sourt_four(stackA, stackB); //sort_four'a gönderiyor.
	else if (ft_lstsize(*stackA) == 5) //Öyle değilse yani 5 tane elemanım var ise,
		ft_sort_five(stackA, stackB); //sort_five'a gönderiyor.
}
