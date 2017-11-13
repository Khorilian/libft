/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:44:11 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 12:44:30 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	isrc;
	size_t	idst;

	isrc = 0;
	idst = 0;
	while (idst < (size - 1) && dst[idst])
		idst++;
	while (src[isrc] && idst < (size - 1))
	{
		dst[idst] = src[isrc];
		isrc++;
		idst++;
	}
	dst[idst] = '\0';
	return (dst);
}
