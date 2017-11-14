/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:57:21 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 15:15:30 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(str) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_memset(str, '\0', size);
	return (str);
}
