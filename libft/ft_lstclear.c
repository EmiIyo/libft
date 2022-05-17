/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiscan <eiscan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:14:25 by eiscan            #+#    #+#             */
/*   Updated: 2022/03/14 17:14:27 by eiscan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*crr;
	t_list	*next;

	if (!lst)
		return ;
	crr = *lst;
	while (crr)
	{
		next = crr->next;
		ft_lstdelone(crr, del);
		crr = next;
	}
	*lst = NULL;
}
