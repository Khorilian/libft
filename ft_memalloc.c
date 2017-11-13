/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:23:31 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 16:51:45 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mmr;

	mmr = malloc(size);
	if (mmr == NULL)
		return (NULL);
	ft_bzero(mmr, size);
	return (mmr);
}
