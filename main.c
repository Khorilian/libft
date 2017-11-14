/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:51:59 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 15:43:06 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strtrim("  test n01 \n ");
	ft_putstr(str);
	return (0);
}
