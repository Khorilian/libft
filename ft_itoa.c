/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:29:47 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 11:27:09 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		itoa_part(int n, int mem)
{
	while (n >= 10)
	{
		n = n / 10;
		mem++;
	}
	return (mem);
}

char			*ft_itoa(int n)
{
	long	mem;
	long	neg;
	char	*str;

	mem = 2;
	neg = 0;
	if (n == -2147483648)
		return ("-2147483648");
	n < 0 ? mem++ : 0;
	n < 0 ? neg = 1 : 0;
	n < 0 ? n = -n : 0;
	mem = itoa_part(n, mem);
	str = (char *)malloc(sizeof(str) * mem);
	str[mem - 1] = '\0';
	mem = mem - 2;
	while (mem >= neg)
	{
		str[mem] = (n % 10) + '0';
		n = n / 10;
		mem--;
	}
	neg ? (str[0] = '-') : 0;
	return (str);
}
