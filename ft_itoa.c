/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:55:08 by hpodratc          #+#    #+#             */
/*   Updated: 2025/01/20 10:12:12 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		num_len(int n);
static void	set_s(char *s, int len, int n, int sign);

char	*ft_itoa(int n)
{
	char	*str;
	int		dig_cnt;
	int		sign;

	dig_cnt = 0;
	sign = 0;
	if (n == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
	{
		dig_cnt = 13;
		str = (char *)malloc((dig_cnt + 1) * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", dig_cnt);
		str[dig_cnt] = '\0';
		return (str);
	}
	if (n < 0)
	{
		sign = 1;
		dig_cnt = 1;
		n *= -1;
	}
	dig_cnt += num_len(n);
	str = (char *)malloc((dig_cnt + 1) * sizeof(char));
	set_s(str, dig_cnt, n, sign);
	return (str);
}

static int	num_len(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}

static void	set_s(char *s, int len, int n, int sign)
{
	int		i;
	char	t;

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
	s[len] = '\0';
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(0));
}*/
