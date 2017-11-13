/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:36:56 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 16:17:26 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((const char*)s1[i] == (const char*)s2[i] && (i < (n - 1)))
		i++;
	return ((const char*)s1[i] - (const char*)s2[i]);
}
