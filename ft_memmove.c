/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:38:00 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 11:50:29 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	int		move;
	int		obj;

	if (dest != src)
	{
		i = (dest < src) ? 0 : n;
		move = (dest < src) ? 1 : -1;
		obj = (dest < src) ? n : 0;
		while (i != obj)
		{
			((char*)dest)[i] = ((const char*)src)[i];
			i = i + move;
		}
	}
	return (dest);
}
