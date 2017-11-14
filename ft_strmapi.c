/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:13:58 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 16:20:25 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = ft_strdup(s);
	while (cpy[i])
	{
		f(i, cpy[i]);
		i++;
	}
	return (cpy);
}
