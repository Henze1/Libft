#include "libft.h"

int num_len(int n);
void set_s(char *s, int len, int n, int sign);

char    *ft_itoa(int n)
{
	char *str;
	int dig_cnt;
	int sign;

	dig_cnt = 0;
	if (n == -2147483648)
	{
		dig_cnt = 13;
		str = (char*)malloc(dig_cnt * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", dig_cnt);
		return (str);
	}
	if (n < 0)
	{
		sign = 1;
		dig_cnt = 1;
		n *= -1;
	}
	dig_cnt += num_len(n);
	str = (char*)malloc(dig_cnt * sizeof(char));
	set_s(str, dig_cnt, n, sign);
	return (str);
}

int num_len(int n)
{
	int len;

	len = 0;
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}

void set_s(char *s, int len, int n, int sign)
{
	int i;
	char t;

	i = 0;
	while (i < len)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		++i;
	}
	if (sign)
		s[i - 1] = '-';
	i = 0;
	while (i < len / 2)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
		++i;
	}
}
