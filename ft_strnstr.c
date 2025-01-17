#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (!*little)
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if (big[i + j] != little[j])
				break;
			++j;
		}
		if (!little[j])
			return ((char*)big + (i - j));
		++i;
	}
	return (NULL);
}
