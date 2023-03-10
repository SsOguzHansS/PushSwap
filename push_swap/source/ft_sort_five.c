/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:12:38 by ogozturk          #+#    #+#             */
/*   Updated: 2022/10/30 16:33:58 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag); //Stack'a mı ve stack'b mi push_small'a ya gönderiyor.
	flag = 1; //Flagımızı 1'e eştliyoruz.
	ft_push_small_a(stackA, stackB, flag); //Stack'ımızı tekrardan push_small'a ya gönderiyoruz.2 en düşük minimumu b'de tutuyoruz.
	ft_sort_three(stackA); //3 argümanı kendi arasında sıralamak için short'threeye gönderiyoruz.
	pa(stackA, stackB); //en düşükten bir önceki elemanı,
	pa(stackA, stackB); //en düşük elemanı stack_a'mızın içine geri çekiyoruz.
}
