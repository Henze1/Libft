#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
	size_t cap;
	void *ptr;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	cap = nelem * elsize;
	ptr = malloc(cap);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, cap);
	return (ptr);
}
