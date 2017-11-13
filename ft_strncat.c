/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:45:52 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 12:46:10 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, size_t n)
{
	size_t	isrc;
	size_t	idest;

	idest = 0;
	isrc = 0;
	while (dest[idest])
		idest++;
	while (isrc < n && src[isrc])
	{
		dest[idest] = src[isrc];
		isrc++;
		idest++;
	}
	dest[idest] = '\0';
	return (dest);
}
