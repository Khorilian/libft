/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:28:15 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/10 12:28:28 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int test;

	test = ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ? 1 : 0;
	return (test);
}