/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:10:47 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 16:24:17 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = ft_strdup(s);
	while (cpy[i])
	{
		f(cpy[i]);
		i++;
	}
	return (cpy);
}
