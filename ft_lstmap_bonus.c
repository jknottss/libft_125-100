/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:00:45 by                   #+#    #+#             */
/*   Updated: 2021/10/15 23:27:52 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_f;
	t_list	*new_l;

	if (!lst || !f)
		return (NULL);
	lst_f = 0;
	while (lst)
	{
		new_l = ft_lstnew(f(lst->content));
		if (!new_l)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&lst_f, new_l);
	}
	return (lst_f);
}
