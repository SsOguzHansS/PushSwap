/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:11:29 by ogozturk          #+#    #+#             */
/*   Updated: 2022/10/30 16:31:54 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ; //lst ya da new oluşmadıysa/yoksa NULL boş döner.
	if (*lst == NULL) //lst NULL'a eşit değilse / yani daha önce linked list'e bir eleman eklediysem,
		*lst = new; //oluşan new'imi lst'e atıyorum. //a'stack egelirse diyelim ilk olarak bir kuru oluşturacağız.
	else //diğer elemanları da tek tek arkasına ekliyor.
	{
		tmp = *lst; 
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
