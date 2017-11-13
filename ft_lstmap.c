/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:09:15 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/13 18:39:56 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	nlist;
	t_list	tmp;
	void	*ncontent;

	tmp = lst;
	nlist = (t_list)malloc(nlist);
	while (tmp != NULL)
	{
		ncontent = malloc(lst->content_size);
		tmp = tmp->next;
	}
}
