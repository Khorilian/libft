/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:17:01 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 15:15:06 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*cpy;
	size_t		i;

	i = 0;
	cpy = ft_strnew(len);
	if (cpy == NULL)
		return (NULL);
	while (i < len)
	{
		cpy[i] = s[start];
		start++;
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
