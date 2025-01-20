/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:58:45 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/20 10:33:14 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c);
char	*get_word(char const *s, char c, size_t *pos);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_cnt;
	char	**word_arr;

	if (*s == '\0')
		return (NULL);
	i = 0;
	j = 0;
	word_cnt = count_words(s, c);
	word_arr = (char **)malloc(word_cnt * sizeof(char *));
	if (word_arr == NULL)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			++j;
		word_arr[i] = get_word(s, c, &j);
		++i;
	}
	return (word_arr);
}

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s || *s == '\0')
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*get_word(char const *s, char c, size_t *pos)
{
	size_t	i;
	size_t	len;
	char	*word;

	i = 0;
	len = 0;
	while (s[*pos + len] != c && s[*pos + len])
		++len;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[*pos + i];
		++i;
	}
	*pos += len;
	word[len] = '\0';
	return (word);
}
