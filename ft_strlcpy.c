#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t i;

	i = 0;
	if (dsize == 0)
	{
		while (src[i])
			++i;
		return (i);
	}
	while (i < dsize - 1 && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	if (i < dsize)
		dest[i] = '\0';
	while (src[i])
		++i;
	return (i);
}
