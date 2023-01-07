/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:11:35 by ogozturk          #+#    #+#             */
/*   Updated: 2022/10/30 16:33:11 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst) //list'enin son elemanını almamızı sağlıyor.
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst->next;
	return (lst);
}
