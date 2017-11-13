/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:37:33 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 16:18:55 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(char*)dest[i] = (const char *)src[i];
		i++;
	}
	return (dest);
}
