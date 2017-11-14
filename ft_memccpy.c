/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:35:40 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 11:37:19 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((const char*)src)[i] && i < n && ((const char*)src)[i] != (char)c)
	{
		((char*)dest)[i] = ((const char*)src)[i];
		i++;
	}
	if (((const char*)src)[i] == (unsigned char)c)
	{
		((char*)dest)[i] = ((const char*)src)[i];
		return (&dest[i + 1]);
	}
	return (NULL);
}
