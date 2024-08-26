/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <nfigueir@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:53:04 by nfigueir          #+#    #+#             */
/*   Updated: 2024/08/26 11:15:34 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_count_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while(s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_word_count(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			count++;
			while ((s[i] != c) && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **s, int i)
{
	while (i > 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return (NULL);
}



char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!str || !s)
		return(ft_free(str, 0));
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		len = ft_count_word_len(s, c);
		if (len)
		{
			str[i] = ft_substr(s, 0, len);
			if (!str[i])
				return (ft_free(str, i));
			i++;
		}
		s += len;
	}
	str[i] = 0;
	return (str);
}
