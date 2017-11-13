/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:42:44 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 12:43:03 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	isrc;
	int	idest;

	isrc = 0;
	idest = 0;
	while (dest[idest])
		idest++;
	while (src[isrc])
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}
