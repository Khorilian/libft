/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:19:38 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 15:57:46 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = (ft_strlen(s) - 1);
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j >= 0)
		j--;
	if (j == -1)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	return (str = ft_strsub(s, i, (j - i + 1)));
}
