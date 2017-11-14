/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:48:14 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 16:12:29 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ibig;
	size_t	ilittle;
	size_t	save;

	ibig = 0;
	while (big[ibig] && ibig < len)
	{
		ilittle = 0;
		if (big[ibig] == little[ilittle])
		{
			save = ibig;
			while (big[ibig] == little[ilittle] && ibig < len)
			{
				if (little[ilittle + 1] == '\0')
					return (&((char*)little)[save]);
				ibig++;
				ilittle++;
			}
		}
		ibig = save + 1;
	}
	return (0);
}
