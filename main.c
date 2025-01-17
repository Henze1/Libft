#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
//	char s1[] = "Hello World   and sun and clouds";
//	char **words = ft_split(s1, ' ');
//	for (int i = 0; i < 6; ++i)
//	{
//		printf("%s\n", words[i]);
//	}
	int n = 2147483647;
	char *num = ft_itoa(n);
	printf("%s\n", num);
	return 0;
}
