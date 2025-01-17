#include "libft.h"

size_t count_words(char const *s, char c);
char *get_word(char const *s, char c, size_t pos);

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t word_cnt;
	char **word_arr;

	if (*s == '\0')
		return (NULL);
	i = 0;
	word_cnt = count_words(s, c);
	word_arr = (char**)malloc(word_cnt * sizeof(char*));
	if (word_arr == NULL)
		return (NULL);
	while (s[i] == c && i < len)
		
	
}

size_t count_words(char const *s, char c)
{
	size_t i = 0;
	size_t count = 0;

	if (!s || *s == '\0')
		return 0;

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
char *get_word(char const *s, char c, size_t pos)
{
	size_t i;
	size_t len;
	char *word;

	i = 0
	len = 0;
	while (s[pos + len] != c)
		++len;
	word = (char*)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[pos + i];
		++i;
	}
	word[len] = '\0';
	return (word);
}


















