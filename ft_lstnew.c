/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:22:34 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/13 16:58:10 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void 	*ncontent;
	size_t	nsize;

	new = (t_list*)malloc(sizeof(t_list));
	ncontent = malloc(content_size);
	if (content == NULL)
	{
		ncontent = NULL;
		nsize = 0;
		return (new);
	}
	if (new == NULL || ncontent == NULL)
		return (NULL);
	ncontent = ft_memcpy(ncontent, content, content_size);
	new->content = ncontent;
	new->content_size = nsize;
	new->next = NULL;
	return (new);
}
