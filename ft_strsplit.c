/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:59:02 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/13 15:48:35 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
		#include <unistd.h>
#include <string.h>
#include "libft.h"

static	int		ft_countwords(char const *s, char c)
{
	int		nbword;
	int		i;

	i = 0;
	nbword = 1;
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

static	void	ft_wordsize(char const *s, char c,int *wordtab)
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
		while (s[i] != c && s[i])
		{
			wordtab[nbrword].nb++;
			i++;
		}
		nbrword++;
	}
	wordtab[nbrword] = 0;
}

//static	void	writing(char const *s, char **tabtab, char c)
//{
//	int		i;
//	int		nbwords;
//	int		is;
//
//	i = 0;
//	nbwords = -1;
//	is = 0;
//	while (s[is])
//	{
//		if (s[is] != c)
//		{
//			nbwords++;
//			while (s[is] != c)
//			{
//				tabtab[nbwords][i] = s[is];
//				i++;
//				is++;
//			}
//			tabtab[nbwords][i] = '\0';
//			i = 0;
//		}
//		is++;
//	}
//	tabtab[nbwords + 1] = NULL;
//}

char			**ft_strsplit(char const *s, char c)
{
	t_info	*wordtab;
	char	**tabtab;
	int		i;
	int		words;

	words = ft_countwords(s, c); 
	i = 0;
	tabtab = (char**)malloc(sizeof(tabtab) * (words + 1));
	wordtab = (int*)malloc(sizeof(wordtab) * (words + 1));
	if (tabtab == NULL || wordtab == NULL)
		return (NULL);
	ft_wordsize(s,c, wordtab);
	while (i < words)
	{
		tabtab[i] = ft_strsub(s, wordtab[i].index, wordtab[i].nb);
		if (tabtab[i] == NULL)
			return (NULL);
		i++;
	}
	writing (s, tabtab, c);
	free(wordtab);
	return (tabtab);
}
