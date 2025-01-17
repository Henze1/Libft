#include "libft.h"

int appliable(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (f(i, s[i]))
			++count;
		++i;
	}
	return (count);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
	unsigned int i;
	int j;
	int new_len;

	i = 0;
	j = 0;
	new_len = appliable(s, f);
	if (new_len == 0)
		return (NULL);
	new = (char*)malloc(new_len * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i])
	{
		if (f(i, s[i]))
			new[j++] = s[i];
		++i;
	}
	new[j] = '\0';
	return (new);
}
