/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:51:59 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/13 14:58:06 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	char	**tabtab;
	int		i;

	i = 0;
	tabtab = ft_strsplit("**Salut***les*gens**", '*');
	if (tabtab == NULL)
		return (0);
	while (tabtab[i])
	{
		ft_putstr(tabtab[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
