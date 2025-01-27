/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:58:45 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/27 10:40:25 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_count(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	const char	*str;
	char		**arr;
	size_t		i;
	size_t		count;

	if (!s)
		return (NULL);
	count = check_count(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < count)
	{
		while (*s && *s == c)
			++s;
		str = s;
		while (*s && *s != c)
			++s;
		arr[i] = ft_substr(str, 0, s - str);
		if (!arr[i] && ft_split(*arr, i))
			return (NULL);
	}
	arr[i] = NULL;
	return (arr);
}

static size_t	check_count(const char *s, char c)
{
	size_t	tokens;
	int		flag;

	tokens = 0;
	while (*s)
	{
		flag = 0;
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			if (!flag)
			{
				++tokens;
				flag = 1;
			}
			++s;
		}
	}
	return (tokens);
}

/*
#include <stdio.h>

int	main()
{
	char *s = "Hello hi noric hello mihat e hi";
	char **words = ft_split(s, ' ');
	
	for (int i = 0; i < 7; ++i)
	{
		printf("%s\n", words[i]);
	}
}*/
