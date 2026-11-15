/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpimenta <jpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 17:46:13 by jpimenta          #+#    #+#             */
/*   Updated: 2026/11/15 18:39:44 by jpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*l;
	t_list	*j;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	j = NULL;
	while(lst)
	{
		cont = f(lst->content);
		l = ft_lstnew(cont);
		if (!l)
		{
			del(cont);
			ft_lstclear(&j, del);
			return (NULL);
		}
		ft_lstadd_back(&j, l);
		lst = lst->next;
	}
	return(j);
}