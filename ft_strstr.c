/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:49:00 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/13 12:08:04 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *src, const char *obj)
{
	int	isrc;
	int	iobj;
	int	save;

	isrc = 0;
	while (src[isrc])
	{
		iobj = 0;
		if (src[isrc] == obj[iobj])
		{
			save = isrc;
			while (src[isrc] == obj[iobj] && src[isrc])
			{
				if (obj[iobj + 1] == '\0')
					return ((char*)&src[save]);
				isrc++;
				iobj++;
			}
		}
		isrc = save + 1;
	}
	return (0);
}
