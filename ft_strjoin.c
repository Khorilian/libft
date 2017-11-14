/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:18:45 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 11:51:15 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		istr;

	i = 0;
	istr = 0;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[istr])
	{
		str[i] = s1[istr];
		istr++;
		i++;
	}
	istr = 0;
	while (s2[istr])
	{
		str[i] = s2[istr];
		istr++;
		i++;
	}
	return (str);
}
