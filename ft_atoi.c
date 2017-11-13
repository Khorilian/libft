/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:20:48 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 16:28:52 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		convert(char *str, int i)
{
	int		result;

	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] + '0');
	}
	return (result);
}

int				ft_atoi(const char *str)
{
	int		i;

	i = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '+')
		return (convert(str, i + 1));
	if (str[i] == '-')
		return (-(convert(str, i + 1)));
	if ('0' <= str[i] && str[i] <= '9')
		return (convert(str, i));
	return (0);
}
