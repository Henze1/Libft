#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *d;
	const char *s;
	char *t;

	i = n;
	d = (char*)dest;
	s = (const char*)src;
	t = (char*)malloc(n * sizeof(char));
	if (t == NULL)
		return (NULL);
	while (i < n)
	{
		t[i] = s[i];
		++i;
	}
	i = 0;
	while (i < n)
	{
		d[i] = t[i];
		++i;
	}
	free(t);
	return (dest);
}
