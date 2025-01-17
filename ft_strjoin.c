#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1len;
	size_t s2len;
	char *new_s;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new_s = (char*)malloc(s1len + s2len);
	if (new_s == NULL)
		return (NULL);
	ft_memcpy(new_s, s1, s1len);
	ft_memcpy(new_s + s1len, s2, s2len);
	new_s[s1len + s2len] = '\0';
	return (new_s);
}
