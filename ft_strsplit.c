/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:59:02 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/14 14:12:21 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static	int		ft_countwords(char const *s, char c)
{
	int		nbword;
	int		i;

	i = 0;
	nbword = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			nbword++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nbword);
}

static	void	ft_wordsize(char const *s, char c, t_info *wordtab)
{
	int		i;
	int		nbrword;

	nbrword = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		wordtab[nbrword].index = i;
		wordtab[nbrword].nb = 0;
		while (s[i] != c && s[i] != '\0')
		{
			wordtab[nbrword].nb++;
			i++;
		}
		nbrword++;
	}
	wordtab[nbrword].nb = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	t_info	*wordtab;
	char	**tabtab;
	int		i;
	int		words;

	words = ft_countwords(s, c);
	i = 0;
	tabtab = (char**)malloc(sizeof(tabtab) * (words + 2));
	wordtab = (t_info*)malloc(sizeof(wordtab) * (words + 2));
	if (tabtab == NULL || wordtab == NULL)
		return (NULL);
	ft_wordsize(s, c, wordtab);
	while (i < words)
	{
		tabtab[i] = ft_strsub(s, wordtab[i].index, wordtab[i].nb);
		if (tabtab[i] == NULL)
			return (NULL);
		i++;
	}
	tabtab[i] = NULL;
	free(wordtab);
	return (tabtab);
}
