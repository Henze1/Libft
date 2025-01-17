#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int num;
	int is_neg;

	i = 0;
	num = 0;
	is_neg = 1;
	while (nptr[i] == ' ' || nptr[i] == '	')
		++i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			is_neg *= -1;
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num *= 10;
		num += nptr[i] - '0';
		++i;
	}
	return (num * is_neg);
}
